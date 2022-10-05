#include <stdio.h>

int main()
{
    int num[10], n, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &num[i]);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("\nThe maximum number of the array is %d ", num[n-1]);
    printf("\nThe minimum number of the array is %d ", num[0]);
    
    return 0;
}