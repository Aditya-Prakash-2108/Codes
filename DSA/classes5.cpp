// static keyword: it is independent of objects i.e. you can access them without creating an object
// syntax: data_type class_name:: variable_name
// static functions: the are function in which can access only static members they can not access 
// objects or other members
// this keyword is also not present in static functions
#include<bits/stdc++.h>
using namespace std;

class hero{
    public:
        int a;
        char c;
        static int time;
        static int random(){
            return time;
        }
};
int hero :: time=2; // you can assign value to static variables outside the class
int main(){
    cout<<hero::time<<endl;
    hero::time+=2;
    cout<<hero::random();
    return 0;
}