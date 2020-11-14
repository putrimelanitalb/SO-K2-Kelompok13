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

// Menghitung nilai maksimum
void *maximum(void *arg) {
    max = arr[0];
    for(i=1; i<n; i++)
        if(max < arr[i])
            max = arr[i];
  
    printf("The maximum value is %d\n", max);
    pthread_exit(NULL);
}
