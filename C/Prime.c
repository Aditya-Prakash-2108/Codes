/*Write a C program to check whether an inputted number is prime or not.
 If prime calculate the square of the number else find its cube.*/
#include <stdio.h>
 int main()
 {
    int num, flag=0;
    printf("Enter the number ");
    scanf("%d", &num);
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
           flag=1;
    }
    if(flag==1)
    {    
        printf("The number is not prime ");
        num*=num*num;
        printf("%d", num);
    }
    else 
    {
        printf("The number is prime ");
        num*=num;
        printf("%d", num);
    }

    return 0;
 }