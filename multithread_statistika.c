#include <stdio.h>
#include <pthread.h>

int arr[100];
int sum = 0;
int n, i;

double avg;
int min, max;

// Menghitung nilai rata-rata
void *average(void *arg) {
    for(i=0; i<n; i++)
        sum = sum + arr[i];
    avg = sum / n;
  
    printf("The average value is %.0lf\n", avg);
    pthread_exit(NULL);
}

// Menghitung nilai minimum
void *minimum(void *arg) {
    min = arr[0];
    for(i=1; i<n; i++)
        if(min > arr[i])
            min = arr[i];
  
    printf("The minimum value is %d\n", min);
    pthread_exit(NULL);
}

