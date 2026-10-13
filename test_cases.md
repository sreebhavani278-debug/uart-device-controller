# Test Cases: UART Command-Based Device Controller 

|Test | Input | Expected result | Pass/Fail |
|---|---|---|---|
| 1 | STATUS at startup | Device status: STOPPED | |
| 2 | START | Device starts successfully | |
| 3 | STATUS after START | Device status: RUNNING | |
| 4 | START twice | Already running message | |
| 5 | STOP | Device stops successfully | |
| 6 | STOP twice | Already stopped message | |
| 7 | HELLO | Unknown command error | |
| 8 | HELP | Supported commands are displayed | |
| 9 | Empty input | No state chane; unknown command error | |
| 10 | EXIT | Controller closes | |
| 11 | More than 49 input characters | Command too long error | |