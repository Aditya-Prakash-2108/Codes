#include<stdio.h>

int main()
{
    int size, temp=0;
    char ch;
    printf("Enter the size of the array ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array\n");
    for (int i=0; i<size; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter 'd' for descending order and 'a' for ascending order: ");
    scanf(" %c", &ch);
    switch(ch)
    {
        case 'a': 
        {
            for(int i=0; i<size; i++)
            {
                for(int j=i+1; j<size; j++)
                {
                    if(arr[i]>arr[j])
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
            break;
        }    
        case 'd':
        {
            for(int i=0; i<size; i++)
            {
                for(int j=i+1; j<size; j++)
                {
                    if(arr[i]<arr[j])
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
            break;
        } 
    }
    printf("The sorted array is");
    for(int i=0; i<size; i++)
    {
        printf("\nElement %d: %d", i+1, arr[i]);
    }
    return 0;    
}