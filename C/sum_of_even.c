#include <stdio.h>

int main()
{
    int num[10], n, sum=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &num[i]);
    for(int i=0; i<n; i++)
    {
        if(num[i]%2==0)
            sum+=num[i];
    }
    printf("Sum of the even numbers is: %d ", sum);

    return 0;
}
