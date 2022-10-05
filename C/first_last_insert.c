#include <stdio.h>

int main()
{
    int s, first, last, c;
    printf("Enter 1 if you want to add element at the last or enter 0 if you want to add element in the beginning: ");
    scanf("%d", &c);
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    int arr[s];
    switch (c)
    {
        case 1 : 
            {
                printf("Enter the array\n");
                for(int i=0; i<s; i++)
                {
                    printf("Element %d: ", i+1);
                    scanf("%d", &arr[i]);
                }
                printf("Enter the element which is to be added: ");
                scanf("%d", &last);
                arr[s]=last;            
                break;
            }
        case 0: 
            {
                printf("Enter the array\n");
                for(int i=1; i<s+1; i++)
                {
                    printf("Element %d: ", i);
                    scanf("%d", &arr[i]);
                }
                printf("Enter the element which is to be added: ");
                scanf("%d", &first);            
                arr[0]=first;
                break;
            }        
        
        default:
        {
            printf("Incorrect Input");
            break;
        }
    }
    printf("\nThe new array is");
    for(int i=0; i<s+1; i++)
        printf("\nElement %d: %d ", i+1, arr[i]);

    return 0;
}