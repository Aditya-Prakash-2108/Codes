#include<stdio.h>

int main()
{
    int n1, n2, k, j=0;
    printf("Enter the number of terms of the first array");
    scanf("%d", &n1);
    int num1[n1];
    for(int i=0; i<n1; i++)
    {    
        printf("a[%d]= ", i);
        scanf("%d", &num1[i]);
    }
    printf("Enter the number of terms of the second array");
    scanf("%d", &n2);
    n2+=n1;
    int num2[n2], num3[n2];
    for(int i=n1; i<n2; i++)
    {    
        printf("a[%d]= ", j);
        scanf("%d", &num2[i]);
        j++;
    }
    printf("Third array is\n ");
    for(int i=0; i<n2; i++)
    {
        num3[i]=num1[i]+num2[i];
        printf("a[%d]= %d\n", i, num3[i]);
    }

    return 0;
}