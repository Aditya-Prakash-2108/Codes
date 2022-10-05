#include <stdio.h>

int main()
{
    int a, b, sum, flag;
    do
    {
        printf("Enter the numbers ");
        scanf("%d %d", &a, &b);
        sum=a+b;
        printf("The sum is %d", sum);
        printf("\nPress 1 if you wish to continue else press 0\n");
        scanf("%d", &flag);
    }while(flag==1);
    
    return 0;
}