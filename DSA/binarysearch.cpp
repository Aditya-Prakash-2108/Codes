#include<iostream>
using namespace std;

int main(){
    int arr[10], n, mid, key, f=0;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter arranged array";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched";
    cin>>key;
    mid= sizeof(arr)/sizeof(arr[0]);
    mid/=2;
    for(int i=0; i<n;){
        if(key<arr[mid]){    //key in left sub-array
            n=mid;
            mid/=2;
        }
        else if(key>arr[mid]){  //key in right sub-array
            i=mid;
            mid=(i+n)/2;
        }
        else if(arr[mid]==key){     //key found
            cout<<"Element found";
            f=1;
            break;
        }
    }
    if(f==0){
        cout<<"Element not found";
    }
    return 0;
}
