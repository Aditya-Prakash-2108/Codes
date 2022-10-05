#include <stdio.h>

int main()
{
    int size, temp, flag=0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array");
    for(int i=0; i<size; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<size; i++)
    {
        temp=arr[i];
        for(int j=i+1; j<size; j++)
        {
            if(temp==arr[j])
            {
                flag=1;
                for(int k=j; k<size-1; k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
            }
        }
    } 
    if(flag==1)
    {
        printf("The new array is");
        for(int i=0; i<size; i++)
        {
            printf("\nElement %d: %d", i+1, arr[i]);
        }
    }
    else
    {
        printf("No element was deleted!\nThe array is");
        for(int i=0; i<size; i++)
        {
            printf("\nElement %d: %d", i+1, arr[i]);
        }
    }

    return 0;   
}