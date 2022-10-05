#include<bits/stdc++.h>
using namespace std;

class mystack{
    int a;
    int top;
    int capacity;

    public mystack(int capacity){
        this.capacity=capacity;
        top=-1;
        new int[capacity];
    }
    void push(int data){
        if(top==capacity-1){
            throw new exception("overflow");
        }
        top++;
        a[top]=data;
    }
}
   
int main(){
    
    return 0;
}