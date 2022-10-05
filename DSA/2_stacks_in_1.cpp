/* In this question we will create an array which will contain two stacks. First stack will
    start from the begining and the second stack will start from the end. 
    STACK_1 -> [ 1 2 3 4 5 | 1 2 3 4 5 ] <- STACK_2  */
#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int *arr;
    int top1;
    int top2;
    int size;
    Stack(int s){
        this -> size = s;
        this -> arr = new int[s];
        top1 = -1;
        top2 = s;
    }
    void push_1(int element){
        if(top1 < top2){
            top1++;
            arr[top1] = element;
        }
        else{
            cout << "space is full for the first stack" << endl;
        }
    }
    void push_2(int element){
        if(top2 > top1){
            top2--;
            arr[top2] = element;
        }
        else{
            cout << "Space is full for second stack" << endl;
        }
    }
    int pop_1(){
        if(top1 >= 0){
            return arr[top1];
            top1--;
        }
        else{
            cout << "Stack 1 is empty! " << endl;
            return -1;
        }

    }
    int pop_2(){
        if(top2 < size){
            return arr[top2];
            top2++;
        }
        else{
            cout << "Stack 2 is empty! " << endl;
            return -1;
        }

    }
    int peek_1(){
        if(top1 > -1){
            return arr[top1];
        }
        else{
            return -1;
        }
    }
    int peek_2(){
        if(top2 < size){
            return arr[top2];
        }
        else{
            return -1;
        }
    }
    
};

int main(){
    Stack s(10);    // top1 ->[10 20 30 40 50 | 50 40 30 20 10]<- top2
    s.push_1(10);
    s.push_1(20);
    s.push_1(30);
    s.push_1(40);
    s.push_1(50);
    s.push_2(50);
    s.push_2(40);
    s.push_2(30);
    s.push_2(20);
    s.push_2(10);
    if(s.peek_1() != -1){
        cout << "Element at the top of the first stack is: " << s.peek_1() << endl;
    }
    else
        cout << "First stack is empty" << endl;
    if(s.peek_2() != -1){
        cout << "Element at the top of the second stack is: " << s.peek_2() << endl;
    }
    else
        cout << "Second stack is empty" << endl;

    cout << "Element which will is popped from the first stack: " << s.pop_1() <<endl;
    cout << "Element which will is popped from the second stack: " << s.pop_2() <<endl;

    return 0;
}