#include<stdio.h>

int main()
{
    int n, k, g=0, e=0, l=0;
    printf("Enter the number of terms ");
    scanf("%d", &n);
    int num[n];
    for(int i=0; i<n; i++)
    {    
        printf("a[%d]= ", i);
        scanf("%d", &num[i]);
    }
    printf("Enter the number you want to compare your array with ");
    scanf("%d", &k);
    for(int i=0; i<n; i++)
    {
        if(num[i]==k)
            e++;
        else if(num[i]>k)
            g++;
        else 
            l++;
    }
    printf("Numbers equal to k = %d", e);
    printf("\nNumbers less than k = %d", l);
    printf("\nNumbers greater than k = %d", g);

    return 0;
}