```
$ ./primecounter 1 10000000
Number of primes in range <2, 10000001> (thread 1): 664579
Execution time (thread 1): 10.916749 seconds

-----------------------------
The total number of primes in the range <2, 10000001>: 664579
Total execution time: 10.917885 seconds
Longest thread execution time: 10.916749 seconds
-----------------------------
```
```
$ ./primecounter 2 10000000
Number of primes in range <2, 10000001> (thread 1): 664579
Execution time (thread 1): 10.972833 seconds

Number of primes in range <2, 10000001> (thread 2): 664579
Execution time (thread 2): 10.952222 seconds

-----------------------------
The total number of primes in the range <2, 10000001>: 1329158
Total execution time: 10.973557 seconds
Longest thread execution time: 10.972833 seconds
-----------------------------
```
```
$ ./primecounter 4 10000000
Number of primes in range <2, 10000001> (thread 1): 664579
Execution time (thread 1): 11.044715 seconds

Number of primes in range <2, 10000001> (thread 2): 664579
Execution time (thread 2): 10.952234 seconds

Number of primes in range <2, 10000001> (thread 3): 664579
Execution time (thread 3): 11.018552 seconds

Number of primes in range <2, 10000001> (thread 4): 664579
Execution time (thread 4): 10.959069 seconds

-----------------------------
The total number of primes in the range <2, 10000001>: 2658316
Total execution time: 11.045478 seconds
Longest thread execution time: 11.044715 seconds
-----------------------------
```
```
$ ./primecounter 8 10000000
Number of primes in range <2, 10000001> (thread 1): 664579
Execution time (thread 1): 21.986737 seconds

Number of primes in range <2, 10000001> (thread 2): 664579
Execution time (thread 2): 21.969177 seconds

Number of primes in range <2, 10000001> (thread 3): 664579
Execution time (thread 3): 21.679641 seconds

Number of primes in range <2, 10000001> (thread 4): 664579
Execution time (thread 4): 21.961599 seconds

Number of primes in range <2, 10000001> (thread 5): 664579
Execution time (thread 5): 21.883412 seconds

Number of primes in range <2, 10000001> (thread 6): 664579
Execution time (thread 6): 21.968510 seconds

Number of primes in range <2, 10000001> (thread 7): 664579
Execution time (thread 7): 21.979114 seconds

Number of primes in range <2, 10000001> (thread 8): 664579
Execution time (thread 8): 21.994365 seconds

-----------------------------
The total number of primes in the range <2, 10000001>: 5316632
Total execution time: 22.004800 seconds
Longest thread execution time: 21.994365 seconds
-----------------------------
```
```
$ lscpu 
Architecture:                    aarch64
CPU op-mode(s):                  32-bit, 64-bit
Byte Order:                      Little Endian
CPU(s):                          4
On-line CPU(s) list:             0-3
Thread(s) per core:              1
Core(s) per socket:              4
Socket(s):                       1
Vendor ID:                       ARM
Model:                           3
Model name:                      Cortex-A72
Stepping:                        r0p3
CPU max MHz:                     1500.0000
CPU min MHz:                     600.0000
BogoMIPS:                        108.00
L1d cache:                       128 KiB
L1i cache:                       192 KiB
L2 cache:                        1 MiB
Vulnerability Itlb multihit:     Not affected
Vulnerability L1tf:              Not affected
Vulnerability Mds:               Not affected
Vulnerability Meltdown:          Not affected
Vulnerability Mmio stale data:   Not affected
Vulnerability Retbleed:          Not affected
Vulnerability Spec store bypass: Vulnerable
Vulnerability Spectre v1:        Mitigation; __user pointer sanitization
Vulnerability Spectre v2:        Vulnerable
Vulnerability Srbds:             Not affected
Vulnerability Tsx async abort:   Not affected
Flags:                           fp asimd evtstrm crc32 cpuid
```
