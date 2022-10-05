/* Given a positive number n, write a code to efficiently generate binary numbers between 1 and n using the stack data structure in linear time.
You may use STL library*/
#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    int n, rem, temp; //n stands for number that is to be inputed | rem stand for remainder |div stands for divident
    cin>>n;
    stack<int> s;
    cout<<"Your Queue is=> ";
    while(n){
        temp=n;
        while(temp){
        rem=temp%2;
        s.push(rem);
        temp/=2;
        }
        n--;
        while(!s.empty()){
            cout<<s.top();
            s.pop();
        }
        cout<<" ";
    }
    //cout<<boolalpha<<s.empty(); // boolalpha converts 0 and 1 to false and true
    return 0;
}