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

// Menghitung nilai maksimum
void *maximum(void *arg) {
    max = arr[0];
    for(i=1; i<n; i++)
        if(max < arr[i])
            max = arr[i];

    printf("The maximum value is %d\n", max);
    pthread_exit(NULL);
}

int main(){
    //input banyaknya angka (N)
    printf("Masukkan N : ");
    scanf("%d", &n);

    //Memasukkan angka ke dalam array arr[]
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    pthread_t t1, t2, t3;

    pthread_create(&t1, NULL, average, NULL);
    pthread_join(t1, NULL);

    pthread_create(&t2, NULL, minimum, NULL);
    pthread_join(t2, NULL);

    pthread_create(&t3, NULL, maximum, NULL);
    pthread_join(t3, NULL);

    return 0;
}
