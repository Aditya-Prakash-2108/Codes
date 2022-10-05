#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, a[100], b[100], c[100];
    printf("Enter number of element in array 1: ");
    scanf("%d", &n);
    printf("Enter number of element in array 2: ");
    scanf("%d", &m);

    printf("Enter the element of array 1:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element of array 2:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    if (n > m)
    {
        for (int i = 0; i < n; i++)
        {
            c[i] = a[i];
        }
        for (int i = 0; i < m; i++)
        {
            c[i] += b[i];
        }
        printf("The third array is:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d \n", c[i]);
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            c[i] = b[i];
        }
        for (int i = 0; i < n; i++)
        {
            c[i] += a[i];
        }
        printf("The third array is:\n ");
        for (int i = 0; i < m; i++)
        {
            printf("%d \n", c[i]);
        }
    }

        return 0;
}