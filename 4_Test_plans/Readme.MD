## Test plans

|Test ID | Description | Input  | Output | Status |
| :---: | :----: | :----: | :----: | :----: |
| TR01 | person seated in vehicle | push button=1 | push button=1 | PASS |
| TR02 |  person not seated in vehicle | push button=0 | push button=0 | PASS |
| TR03 | Temperature Request |	Temp=0 | heater=Off | PASS |
| TR04 | Temperature Request | Temp=20 | heater=20 degree generation | PASS |
| TR05 | Temperature Request | Temp=25 | heater=25 degree generation | PASS |
| TR06 | Temperature Request | Temp=29 | heater=29 degree generation | PASS |
| TR07 | Temperature Request | Temp=33 | heater=33 degree generation | PASS |
| TR08	| LED ON | Button=1 && Heater=1 | LED=1 | PASS |
| TR09 | LED OFF | Button=0 && Heater=0 | LED=0 | PASS |
| TR10 | LCD Display | Temperature :) | 20 deg Cel	Temperature :) | 20 deg Cel	| PASS |