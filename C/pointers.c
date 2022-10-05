#include <stdio.h>

int main()
{
    short int age;
    printf("Enter the age: ");
    scanf("%hi", &age);
    printf("\nAddress of the variable age is: %p", (void*) &age); // Hexadecimal Address of variable age
    printf("\nAddress of the variable age is: %lu", (unsigned long) &age); // Integer Address of variable age
    printf("\nContent of the variable age is: %hi", *(&age)); //Content of variable age
    short int *ptr;
    ptr=&age;
    printf("\nAddress in ptr: %lu", ptr);
    printf("\nAddress of ptr: %lu", (unsigned long) &ptr);
    printf("\nContent of age pointed by ptr: %hi", *ptr);
    
    return 0;
}