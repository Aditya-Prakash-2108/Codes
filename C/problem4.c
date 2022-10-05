#include <stdio.h>

int main()
{
    int t, diff1, sum=0,diff2, diff3, N;
    scanf("%d", &t);
    int n[t], k[t], f[t], flag[t], s[1000], e[1000];
    for(int i=0; i<t; i++)
    {    
        scanf("%d %d %d", &n[i], &k[i], &f[i]);
        for(int z=0; z<n[i]; z++)
            scanf("%d %d", &s[z], &e[z]); 
    }              
    for(int i=0; i<t; i++)
    {
        diff1=f[i];
        flag[i]=0;
        for(int j=n[i]; j<1; j--)
        {
            diff1-=e[j];
            diff2=s[j]-e[j-1];
            sum+=diff1+diff2+s[0];
        }
        if(k[i]>=sum)
            flag[i]=1;
    }
    for(int i=0; i<t; i++)
    {
        if(flag[i]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}