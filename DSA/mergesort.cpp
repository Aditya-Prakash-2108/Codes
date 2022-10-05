#include<iostream>
using namespace std;

void ms(int *ptr){
    cout<<*ptr;
} 
int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    ms(arr);
    
    return 0;
}