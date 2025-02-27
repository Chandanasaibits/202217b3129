#include <stdio.h>

int main() {
    int n, a[10], b[10], t[10], w[10], g[11], i; // Increase g[] size to 11 for valid access
    float att = 0, awt = 0; // Declare awt and att as floats for average calculations

    // Initialize arrays and variables
    for (i = 0; i < 10; i++) {
        a[i] = 0;
        b[i] = 0;
        w[i] = 0;
        g[i] = 0;
    }

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the burst times:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    printf("\nEnter the arrival times:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    g[0] = 0;
    for (i = 0; i < n; i++) {
        g[i + 1] = g[i] + b[i];
    }

    for (i = 0; i < n; i++) {
        w[i] = g[i] - a[i];
        t[i] = g[i + 1] - a[i];
        awt += w[i];
        att += t[i];
    }

    awt /= n; // Calculate average waiting time
    att /= n; // Calculate average turnaround time
    printf("\n\tProcess\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("\tP%d\t\t%d\t\t%d\n", i, w[i], t[i]);
    }

    printf("\nThe average waiting time is %f\n", awt);
    printf("The average turnaround time is %f\n", att);

    return 0;
}#include <stdio.h>
void bubble_sort(int arr[], int n)
{
int i, j;
for (i = 0; i < n - 1; i++)
{
for (j = 0; j < n - i - 1; j++)
{
 if (arr[j] > arr[j + 1])
{
 int temp = arr[j];
 arr[j] = arr[j + 1];
 arr[j + 1] = temp;
 }
 }
 }
}
int main()
{
int arr[] = {64, 34, 25, 12, 22, 11, 90};
 int n = sizeof(arr) / sizeof(arr[0]);
 bubble_sort(arr, n);
 printf("Sorted array: ");
 for (int i = 0; i < n; i++)
{
 printf("%d ", arr[i]);
 }
 return 0;
}
