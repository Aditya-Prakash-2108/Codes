#include<stdio.h>
void separate();
void output();
int main()
{
    int s;
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    int arr[s];
    printf("Enter the array\n");
    for(int i=0; i<s; i++)
    {
        printf("Element[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    separate(arr, s);
}
void separate(int a[], int s)
{    
    int temp;
    for(int i=0; i<s; i++)
        for(int j=i+1; j<s; j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }        
    output(a, s);
}
void output(int A[], int s)
{
    printf("The array is");
    for(int i=0; i<s; i++)
    {
        printf("\nElement[%d]: %d", i+1, A[i]);
    }
}