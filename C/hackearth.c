#include <stdio.h>

int main()
{
    int t, n, m, k,res[100], l[100], flag=0;
    scanf("%d", &t);
    for(int z=0; z<t; z++)
    {    
        scanf("%d %d %d", &n, &m, &k);
        for(int i=1; i<=k; i++)
            scanf("%d", l[i]);
        for(int i=1; i<=k; i++)
        {
            if(l[i]<=n)
            {
                for(int j=i+1; j<=k; j++)
                {
                    if(l[i]==l[j])
                    {
                        res[i]=l[i];
                        flag++;
                    }

                }
            }
        }
    }
    for(int z=0; z<t; z++)
    {
        if(flag==0)
            printf("0");
        else
            {   
                printf("%d", flag);
                for(int i=0; i<flag; i++)
                    printf("%d", res[i]);
            }
    }    

    return 0;
}