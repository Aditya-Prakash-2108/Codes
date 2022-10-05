#include<iostream>
#include<queue>
#include <bits/stdc++.h> 

using namespace std; 

void display(queue <int> Q1) 
{ 
    queue <int> Q = Q1; 
    while (!Q.empty()) 
    { 
        cout << Q.front(); 
        Q.pop(); 
    } 
    cout << '\n'; 
} 
   
void interchange(queue<int>& q1, queue<int> &q2) 
{ 
    if (q1.size() % 2 != 0) 
    {
        cout << "Input even number of integers." << endl; 
        exit;
    }
    if (q2.size() % 2 != 0) 
    {
        cout << "Input even number of integers." << endl; 
        exit;
    }
  
    queue<int> q3, q4; 
    int halfSize = q1.size() / 2; 

    for (int i = 0; i < halfSize; i++) { 
        q4.push(q2.front()); 
        q2.pop(); 
    } 
    for (int i = 0; i < halfSize; i++) { 
        q4.push(q1.front()); 
        q1.pop(); 
    }
    for (int i = 0; i < halfSize; i++) { 
        q3.push(q2.front()); 
        q2.pop(); 
    }
    for (int i = 0; i < halfSize; i++) { 
        q3.push(q1.front()); 
        q1.pop(); 
    }

    display(q3);
    display(q4);
} 
  
int main() 
{ 
    queue <int> q1, q2,q3,q4;
    int num1,num2, temp=1, a[10], i=0,k=0;
    cout<<"Enter the first number ";
    cin>>num1;
    while (temp!=0){
        temp=num1%10;
        a[i]=temp;
        num1/=10;
        i++;
    }
    for(int j=i-1; j>=0; j--){
        q1.push(a[j]);
    }
    cout<<"Enter the second number ";
    cin>>num2;
    temp=1;
    while (temp!=0){
        temp=num2%10;
        a[k]=temp;
        num2/=10;
        k++;
    }
    if(i!=k){
        cout<<"Numbers entered should be same";
        exit;
    }
    for(int j=k-1; j>=0; j--){
        q2.push(a[j]);
    }    
    // q1.push(3); 
    // q1.push(2); 
    // q1.push(4); 
    // q1.push(5); 
    // q2.push(7); 
    // q2.push(4); 
    // q2.push(6); 
    // q2.push(7); 
; 
    interchange(q1, q2);  
    return 0; 
}