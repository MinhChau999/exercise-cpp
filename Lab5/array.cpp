// input output array
#include <stdio.h>  

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("The array is: ");
    for (int i = 0; i < n; i++){
        printf("\narr[%d] = %d ",i, arr[i]);
    }
    printf("\n");
    return 0;
}