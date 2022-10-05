#include <stdio.h>

int main()
{
    int n, ctr, temp;
    scanf("%d", &n);
    temp=n;
    for(int i=1; i<=n; i++)
    {
        ctr=0;
        temp--;
        for(int j=1; j<=2*i-1; j++)
        {
            if(ctr==0)
            {    for(int k=temp; k>=1 ; k--)
                {    
                    printf(" ");
                }
                ctr++;
            }        
            printf("*");
        }
        printf("\n");
    }
    return 0;    
}