#include <stdio.h>

int main()
{
    int s, num, ctr=0;
    printf("Enter the size of the array ");
    scanf("%d", &s);
    printf("Enter the array\n");
    int arr[s];
    for (int i=0; i<s; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number whose frequency you want to check ");
    scanf("%d", &num);
    for (int i=0; i<s; i++)
    {
        if (arr[i]==num)
        {
            ctr++;
        }
    }
    printf("Frequency of the number %d is %d ", num, ctr);
    
    return 0;
}