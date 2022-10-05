// stack can be implemented using array or linked list.
// In this program we will use array method.
#include<bits/stdc++.h>
using namespace std;
   
class Stack{
    public:
        int *arr;
        int top;
        int size;

        Stack(int s){
            this -> size = s;
            arr = new int[s];
            top =-1;
        }
        void push(int element){     // This function pushes elements in the stack
            if(size - top > 1){
                top++;
                arr[top] = element;
            }
            else{
                cout << "Stack overflow" << endl;
            }
        }
        void pop(){     // This function pops elements from the stack
            if(top >= 0){
                top--;
            }
            else    
                cout << "Stack underflow" << endl;
        }

        int peek(){     // This function returns top element of the stack
            if(top >= 0){
                return arr[top];
            }
            else{
                cout << "Stack is empty" << endl;
                return -1;
            }
        }

        bool isEmpty(){
            if(top ==-1){
                return true;
            }
            else{
                return false;
            }
        }

};

int main(){
    
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout << "Element at the top is: " << st.peek() << endl;
    // st.pop();
    // st.pop();
    // if(st.isEmpty()){
    //     cout << "Stack is empty" << endl;
    // }
    // else{
    //     cout << "Stack is not empty" << endl;
    // }
    
    
    return 0;
}