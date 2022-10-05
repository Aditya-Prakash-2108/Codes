#include <stdio.h>

int main()
{
    int s, mid;
    printf("Enter size of the array: ");
    scanf("%d", &s);
    int arr[s], temp[s];
    printf("Enter the array\n");
    for(int i=0; i<s; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    mid=s/2;
    for(int i=0, j=s-1; i<mid; i++,j--)
    {
        temp[i]=arr[i];
        arr[i]=arr[j];
        arr[j]=temp[i];
    }
    printf("The new array is");
    for(int i=0; i<s; i++)
        printf("\nElement %d: %d", i+1, arr[i]);
    
    return 0;
}