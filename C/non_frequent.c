#include <stdio.h>

int main()
{
    int s, num, ctr=0, temp, res;
    printf("Enter the size of the array ");
    scanf("%d", &s);
    printf("Enter the array\n");
    int arr[s];
    for (int i=0; i<s; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<s; i++)
    {
        temp=arr[i];
        for(int j=i+1; j<s; j++)
        {
            if (temp==arr[j]) 
            {
                ctr++;
            }
        }
    }
    res=s-(2*ctr);
    printf("Frequency of the non-repeating numbers is: %d", res);
    
    return 0;
}