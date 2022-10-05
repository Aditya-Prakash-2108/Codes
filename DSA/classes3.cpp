//copy constructor
#include<bits/stdc++.h>
using namespace std;
   
class copyconst{
    public:
        int a;
        char c;

        copyconst(copyconst &temp){
            this->a=temp.a;
            this->c=temp.c;
        }
        void setdata(int a, char c){
            this->a=a;
            this->c=c;
        }
        void print(){
            cout<<"a-> "<<this->a<<" c-> "<<this->c<<endl;
        }
};
int main(){
    copyconst source;
    source.setdata(10,'A');
    source.print();
    // target=source;
    // copyconst target(source);
    copyconst target(source);
    target.print();
    return 0;
}