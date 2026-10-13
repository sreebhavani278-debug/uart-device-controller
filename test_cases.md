# Test Cases: UART Command-Based Device Controller 

|Test | Input | Expected result | Pass/Fail |
|---|---|---|---|
| 1 | STATUS at startup | Device status: STOPPED | PASS |
| 2 | START | Device starts successfully | PASS |
| 3 | STATUS after START | Device status: RUNNING | PASS |
| 4 | START twice | Already running message | PASS |
| 5 | STOP | Device stops successfully | PASS |
| 6 | STOP twice | Already stopped message | PASS |
| 7 | HELLO | Unknown command error | PASS |
| 8 | HELP | Supported commands are displayed | PASS |
| 9 | Empty input | No state change; unknown command error | PASS |
| 10 | EXIT | Controller closes | PASS |
| 11 | More than 49 input characters | Command too long error | PASS |
