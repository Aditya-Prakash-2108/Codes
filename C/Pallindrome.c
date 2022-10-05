#include <stdio.h>
int main()
{
    int num, rev=0, rem, temp;
    printf("Enter the number");
    scanf("%d", &num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        rev=rev*10+rem;
    }
    if(rev==temp)
        return 1;
    else
        return 0;
}