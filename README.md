### Single-Thread Performance Measurement Application
# Primecounter CPU benchmark 

## Description

The application is designed to measure the performance of individual threads on a computer. It utilizes mathematical computations for a given range of numbers to assess the performance of each thread. The program performs parallel computations using the pthread.h library, enabling the simultaneous execution of multiple threads.

## Features

- Computes the number of prime numbers within the specified range for each thread
- Measures the execution time for each thread and the overall program execution time
- Displays the count of prime numbers computed by each thread
- Summarizes the total count of prime numbers computed by all threads
- Presents the cumulative count of prime numbers within the specified range
- Allows configuration of the number of threads and range of numbers as command-line parameters

## Usage Instructions

1. Compile the program using a C compiler, such as GCC, with the command:
   ```
   gcc -o primecouter primecouter.c -pthread
   ```
2. Run the program by providing the number of threads, start range, and end range as command-line arguments, for example:
   ```
   ./primecouter 4 1000
   ```
   The above command runs the program with 4 threads, calculating the count of prime numbers within the range from 1 to 1000.

## Results

After running the program, the console will display the results for each thread, including the count of prime numbers found. At the end of the program, the total execution time and the cumulative count of prime numbers within the specified range will be displayed.

## Notes

Ensure that you have a C compiler (such as GCC) installed on your computer, along with the pthread.h library. If the pthread.h library is not available, you may need to install it on your operating system or use an appropriate alternative for thread handling within your environment.
