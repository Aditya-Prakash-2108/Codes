#include <stdio.h>

int main()
{
    int num[3], temp, sl;
    printf("Enter three numbers: ");
    for(int i=0; i<3; i++)
        scanf("%d", &num[i]);
    for(int i=0; i<3; i++)
    {
        for(int j=i+1; j<3; j++)                  
        {
            if(num[i]<num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }  
        }
    } 
    sl=num[2];
    printf("\nThe second largest number is: %d", sl);

    return 0;
}
