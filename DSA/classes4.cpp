// destructors
#include<bits/stdc++.h>
using namespace std;
class letsdestruct{
    public:
        int a;
        char c;

    ~letsdestruct(){
        cout<<"Destructor was called"<<endl;
    }
};
int main(){
    letsdestruct STATIC;
    letsdestruct *DYNAMIC= new letsdestruct();
    delete DYNAMIC;     //We have to delete dynamic objects manually by using delete function because 
    return 0;           // in the case of static objects the destructor is automatically called but 
                        //  that is not the case for dynamic objects.
}