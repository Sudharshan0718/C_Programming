#include <stdio.h>
void incrementArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = arr[i] + 1; 
    }
}
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    incrementArray(arr, n);
    printf("Array after increment:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
}