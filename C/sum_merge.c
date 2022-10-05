#include<stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter the number of terms "); 
    scanf("%d", &n1);
    int num1[n1];
    printf("Enter the first array");
    for(int i=0; i<n1; i++)             // first array being initialised
    {
        printf("a[%d]= ", i);
        scanf("%d", &num1[i]);
    }
    printf("Enter the number of terms "); 
    scanf("%d", &n2);
    int num2[n2];
    printf("Enter the second array");   // second array being initialised
    for(int i=0; i<n2; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &num2[i]);
    }
    n3= n2>n1 ? n2:n1;
    int num3[n3];
    printf("Third array is\n ");
    for(int i=0; i<n3; i++)
    {
        num3[i]=num1[i]+num2[i];
        printf("a[%d]= %d\n", i, num3[i]);
    }

    return 0;
}