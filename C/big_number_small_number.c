#include <stdio.h>

int main()
{
    int num[10000], t, small, big;
    printf("Enter the number of numbers you want to input\n");
    scanf("%d", &t);
    printf("Enter numbers\n");
    for(int i=0; i<t; i++)
        scanf("%d", &num[i]);
        
    small=num[0];
    big=num[0];
    for(int j=0; j<t; j++)
    {
        if(small>num[j])
            small=num[j];
        if(big<num[j])
            big=num[j];
    }
    printf("The largest number is %d", big);
    printf("The smallest number is %d", small);
    
    return 0;
}