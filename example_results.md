# Mac Air M1 2019
#### thread = 1
```
% ./primecounter 1 10000000
Number of primes in range <2, 10000001> (thread 1): 664579
Execution time (thread 1): 2.291121 seconds

-----------------------------
The total number of primes in the range <2, 10000001>: 664579
Total execution time: 2.291269 seconds
Longest thread execution time: 2.291121 seconds
-----------------------------
```
#### thread = 2
```
% ./primecounter 2 10000000
Number of primes in range <2, 10000001> (thread 1): 664579
Execution time (thread 1): 2.362223 seconds

Number of primes in range <2, 10000001> (thread 2): 664579
Execution time (thread 2): 2.363570 seconds

-----------------------------
The total number of primes in the range <2, 10000001>: 1329158
Total execution time: 2.363723 seconds
Longest thread execution time: 2.363570 seconds
-----------------------------
```
#### thread = 4
```
% ./primecounter 4 10000000
Number of primes in range <2, 10000001> (thread 1): 664579
Execution time (thread 1): 2.440722 seconds

Number of primes in range <2, 10000001> (thread 2): 664579
Execution time (thread 2): 2.441689 seconds

Number of primes in range <2, 10000001> (thread 3): 664579
Execution time (thread 3): 2.441567 seconds

Number of primes in range <2, 10000001> (thread 4): 664579
Execution time (thread 4): 2.442942 seconds

-----------------------------
The total number of primes in the range <2, 10000001>: 2658316
Total execution time: 2.443184 seconds
Longest thread execution time: 2.442942 seconds
-----------------------------
```
#### thread = 8
```
% ./primecounter 8 10000000
Number of primes in range <2, 10000001> (thread 1): 664579
Execution time (thread 1): 3.776508 seconds

Number of primes in range <2, 10000001> (thread 2): 664579
Execution time (thread 2): 3.755765 seconds

Number of primes in range <2, 10000001> (thread 3): 664579
Execution time (thread 3): 3.749051 seconds

Number of primes in range <2, 10000001> (thread 4): 664579
Execution time (thread 4): 3.766205 seconds

Number of primes in range <2, 10000001> (thread 5): 664579
Execution time (thread 5): 3.758188 seconds

Number of primes in range <2, 10000001> (thread 6): 664579
Execution time (thread 6): 3.760613 seconds

Number of primes in range <2, 10000001> (thread 7): 664579
Execution time (thread 7): 3.777272 seconds

Number of primes in range <2, 10000001> (thread 8): 664579
Execution time (thread 8): 3.771810 seconds

-----------------------------
The total number of primes in the range <2, 10000001>: 5316632
Total execution time: 3.777506 seconds
Longest thread execution time: 3.777272 seconds
-----------------------------
```
