#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, num;
    i=(rand()%100)+1;
    while(i=i)
    {
        printf("Choose the number ");
        scanf("%d", &num);
        if(num<i)
            printf("Too low, try again\n");
        else if(num==i)
        {    
            printf("You guessed it correct, Congratulations!\n");
            break;
        }
        else
            printf("Too high, try again\n");
    }
    
    
    return 0;
}
