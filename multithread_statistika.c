// Menghitung nilai rata-rata
void *average(void *arg) {
    for(i=0; i<n; i++)
        sum = sum + arr[i];
    avg = sum / n;
  
    printf("The average value is %.0lf\n", avg);
    pthread_exit(NULL);
}
