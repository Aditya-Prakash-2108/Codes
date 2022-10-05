#include<stdio.h>

int main()
{
    int n, o=0, e=0;
    printf("Enter the number of terms ");
    scanf("%d", &n);
    int num[n];
    for(int i=0; i<n; i++)
    {    
        printf("a[%d]= ", i);
        scanf("%d", &num[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(num[i]%2==0)
            e++;
        else
            o++;   
    }
    printf("Number of odd numbers: %d", o);
    printf("\nNumber of even numbers: %d", e);

    return 0;
}