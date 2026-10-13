# UART Command-Based Device Controller

## Overview

This beginner-level C project simulates a device controller that accepts text commands through a computer terminal.

The program processes commands, maintains a device state, and displays responses. It is designed to practise foundational C programming and embedded-firmware concepts.

## Features

- Start and stop the simulated device
- Display the current device status
- Display available commands
- Handle unsupported commands
- Detect overly long input
- Test repeated state-change commands

## Commands

| Command | Purpose |
|---|---|
| `START` | Start the simulated device |
| `STOP` | Stop the simulated device |
| `STATUS` | Display the current state |
| `HELP` | Display available commands |
| `EXIT` | Close the program |

## Technologies

- C programming language
- GCC compiler
- Visual Studio Code
- Git and GitHub

## How to Compile

```powershell
gcc -std=c11 -Wall -Wextra -pedantic main.c -o controller.exe
```

## How to Run

```powershell
.\controller.exe
```

## Architecture

Terminal input → Command processing → Device state update → Terminal response

## Testing

Test cases are documented in `test_cases.md`. Record actual test results after running the program.

## Limitations

This is a software-only simulation. It does not implement physical UART communication, microcontroller peripherals, or hardware control.

## Future Improvements

- Add case-insensitive command handling
- Separate the command processor into its own source file
- Add automated tests
- Implement UART communication on a microcontroller when hardware becomes available

## Learning Objectives

Practise C functions, string handling, enumerations, pointers, input validation, state management, and basic software testing.