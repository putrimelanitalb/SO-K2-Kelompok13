#include <stdio.h>
#include <pthread.h>

int arr[100];
int sum = 0;
int n, i;

double avg;
int min, max;

// Menghitung nilai minimum
void *minimum(void *arg) {
    min = arr[0];
    for(i=1; i<n; i++)
        if(min > arr[i])
            min = arr[i];
  
    printf("The minimum value is %d\n", min);
    pthread_exit(NULL);
}

