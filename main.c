#include<stdio.h>
#include<string.h>

#define BUFFER_SIZE 50

typedef enum {
    DEVICE_STOPPED,
    DEVICE_RUNNING
} DeviceState;

void show_help(void) 
{
    printf("\nAvailable commands: \n");
    printf("START - Start the device \n");
    printf("STOP - Stop the device \n");
    printf("STATUS - Display device status \n");
    printf("HELP - Show available commands \n");
    printf("EXIT - Exit the program \n");
}

void process_command(const char *command, DeviceState *state) {

    if(strcmp(command, "START") == 0) {
        if (*state == DEVICE_RUNNING) {
            printf("Device is already running. \n");
        } else {
            *state = DEVICE_RUNNING;
            printf("Device started successfully. \n");
        }
    }
    else if (strcmp(command, "STOP") == 0) {
        if (*state == DEVICE_STOPPED) {
            printf("Device is already stopped. \n");
        } else {
            *state = DEVICE_STOPPED;
            printf("Device stopped successfully. \n");
        }
    }
    else if(strcmp(command, "STATUS") == 0) {
        if (*state == DEVICE_RUNNING) {
            printf("Device status: RUNNING \n");
        } else {
            printf("Device status: STOPPED \n");
        }
    }
    else if (strcmp(command, "HELP") == 0) {
        show_help();
    } 
    else {
        printf("ERROR: Unknown command. Type HELP. \n");
    }
}

int main(void) {
    char command[BUFFER_SIZE];
    DeviceState state = DEVICE_STOPPED;

    printf("UART Command-Based Device Controller \n");
    printf("Type HELP to see available commands. \n");

    while(1) {
        printf("\nDevice> ");

        if (fgets(command, sizeof(command), stdin) == NULL) {
            printf("\nInput closed. Exiting. \n");
            break;
        }

        command[strcspn(command, "\n")] = '\0';

        if (strchr(command, '\n') == NULL && strlen(command) == sizeof(command) - 1) {
            int ch;
            while((ch = getchar()) != '\n' && ch != EOF) {
                /* Discard remaining characters*/
            }
            printf("ERROR: Command is too long. \n");
            continue;
        }

        if(strcmp(command, "EXIT") == 0) {
            printf("Controller closed. \n");
            break;
        }

        process_command(command, &state);
    }

    return 0;
}