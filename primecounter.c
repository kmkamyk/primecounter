#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <pthread.h>

typedef struct {
    int start;
    int end;
    int primeCount;
    double threadTime;
} ThreadArgs;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

void *countPrimes(void *args) {
    ThreadArgs *threadArgs = (ThreadArgs *)args;
    int count = 0;

    struct timespec begin, end;
    clock_gettime(CLOCK_MONOTONIC, &begin);

    for (int number = threadArgs->start; number <= threadArgs->end; number++) {
        if (isPrime(number)) {
            count++;
        }
    }

    clock_gettime(CLOCK_MONOTONIC, &end);
    double time_spent = (end.tv_sec - begin.tv_sec) + (end.tv_nsec - begin.tv_nsec) / 1e9;

    threadArgs->primeCount = count;
    threadArgs->threadTime = time_spent;

    pthread_exit(NULL);
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Podaj liczbę wątków i liczbę danych do obliczeń jako parametry!\n");
        return 1;
    }

    int numThreads = atoi(argv[1]);
    int range = atoi(argv[2]);

    int start = 2;
    int end = start + range - 1;

    pthread_t threads[numThreads];
    ThreadArgs threadArgs[numThreads];

    struct timespec begin_total, end_total;
    clock_gettime(CLOCK_MONOTONIC, &begin_total);

    for (int i = 0; i < numThreads; i++) {
        threadArgs[i].start = start;
        threadArgs[i].end = end;

        pthread_create(&threads[i], NULL, countPrimes, (void *)&threadArgs[i]);
    }

    for (int i = 0; i < numThreads; i++) {
        pthread_join(threads[i], NULL);
    }

    int totalPrimeCount = 0;
    double maxThreadTime = 0.0;

    for (int i = 0; i < numThreads; i++) {
        totalPrimeCount += threadArgs[i].primeCount;
        if (threadArgs[i].threadTime > maxThreadTime) {
            maxThreadTime = threadArgs[i].threadTime;
        }

        printf("Ilość liczb pierwszych w zakresie <%d, %d> (wątek %d): %d\n", threadArgs[i].start, threadArgs[i].end, i + 1, threadArgs[i].primeCount);
        printf("Czas wykonania (wątek %d): %f sekund\n\n", i + 1, threadArgs[i].threadTime);
    }

    clock_gettime(CLOCK_MONOTONIC, &end_total);
    double total_time_spent = (end_total.tv_sec - begin_total.tv_sec) + (end_total.tv_nsec - begin_total.tv_nsec) / 1e9;

   //  printf("Całkowita ilość liczb pierwszych w zakresie <%d, %d>: %d\n", start, end, totalPrimeCount);
   // printf("Całkowity czas wykonania: %f sekund\n", total_time_spent);
   //  printf("Najdłuższy czas wykonania wątku: %f sekund\n", maxThreadTime);

    return 0;
}
