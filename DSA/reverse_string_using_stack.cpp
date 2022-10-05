// WE will reverse a string using a stack
#include<bits/stdc++.h>
using namespace std;
   
class Stack{
    public:
        char *ch;
        int top;
        int size;
        Stack(int s){
            this -> size = s;
            this -> ch = new char[s];
            top = -1;
        }
        void push_ch(char c){
            top++;
            ch[top] = c;
        }
        void peek(){
            cout << "Top element is: " << ch[top] << endl;
        }
        void pop(){
            top--;
            size--;
        }
        void display(){
            if(top < 0)
                cout << "Stack is empty " << endl;
            else{
                for(int i=0 ; i<size ; i++){
                    cout << ch[top] << " ";
                    top--;
                }
                cout << endl;
            }
        }
};

int main(){
    Stack s(10);
    for(int i=0; i<10 ; i++){
        s.push_ch(i + 65);
    }
    s.pop();
    s.display();
    s.display();
    return 0;
}