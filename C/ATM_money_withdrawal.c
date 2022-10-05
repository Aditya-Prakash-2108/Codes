#include <stdio.h>
int main()
{
    int n, a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0;
    printf("Enter the amount to be withdrawn ");
    scanf("%d", &n);
    while(n>=2000)
    {
        a++;
        n-=2000;
    }
    printf("\nYou have %d---2000 rupee note, ", a);
    while(n>=500)
    {
        b++;
        n-=500;
    }
    printf("\nYou have %d---500 rupee note, ", b);
    while(n>=100)
    {
        c++;
        n-=100;
    }
    printf("\nYou have %d---100 rupee note, ", c);
    while(n>=50)
    {
        d++;
        n-=50;
    }
    printf("\nYou have %d---50 rupee note, ", d);
    while(n>=20)
    {
        e++;
        n-=20;
    }
    printf("\nYou have %d---20 rupee note, ", e);
    while(n>=10)
    {
        f++;
        n-=10;
    }
    printf("\nYou have %d---10 rupee note, ", f);
    while(n>=5)
    {
        g++;
        n-=5;
    }
    printf("\nYou have %d---5 rupee note, ", g);
    while(n>=2)
    {
        h++;
        n-=2;
    }
    printf("\nYou have %d---2 rupee note, ", h);
    while(n>=1)
    {
        i++;
        n-=1;
    }
    printf("\nYou have %d---1 rupee note. ", i);
    
    return 0;
}