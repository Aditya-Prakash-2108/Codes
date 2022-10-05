#include<iostream>
using namespace std;
void fn(int *a, int s){
    for(int i=0; i<s; i++){
        *a++;
        cout<<*a<<endl;
        a++;
    }
}
   
int main(){
    int arr[]={1,2,3,4,5}, n;
    n=sizeof(arr)/sizeof(arr[0]);
    fn(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}