#include <stdio.h>
#include <string.h>

int main()
{
    int s, pos;
    char ch;
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    int arr[s];
    printf("Enter the array\n");
    for(int i=0; i<s; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Press \"f\" for first, \"l\" for last and \"p\" to enter a position ");   
    scanf(" %c", &ch);
    switch(ch)
    {
        case 'f':
            {
                for(int i=0; i<s-1; i++)
                    arr[i]=arr[i+1];
                printf("The element is deleted!!");
                printf("The new array is:");
                for(int i=0; i<s-1; i++)
                    printf("\nElement %d: %d\n",i+1 ,arr[i]);
                break;
            }
        case 'l':
            {
                printf("The element is deleted!!");
                printf("The new array is:");
                for(int i=0; i<s-1; i++)
                    printf("\nElement %d: %d\n",i+1 ,arr[i]);
                break;
            }        
        case 'p':
            {
                printf("Enter the position: ");
                scanf("%d", &pos);
                pos--;
                for(int i=pos; i<s-1; i++)
                    arr[i]=arr[i+1];
                printf("The element is deleted!!");
                printf("\nThe new array is:");
                for(int i=0; i<s-1; i++)
                    printf("\nElement %d: %d\n",i+1 ,arr[i]);
                break;
            }

        default:
            {
                printf("Invalid Input");
                break;
            }
    }
    
    return 0;
}