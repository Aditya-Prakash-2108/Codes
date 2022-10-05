//this operator
#include<bits/stdc++.h>
using namespace std;
   
class player{
    public:
        int health;
        string name;
        char level;
        player(int health, string name, char level){
            this->health=health;
            this->name=name;
            this->level=level;
        }
        player(){
            cout<<"this is copy of the initial constructor"<<endl;
        }
};
int main(){
    player *p= new player(10, "Lucifer", 'C');
    player p1;
    cout<<"stats"<<endl<<"[ "<<p->health<<", "<<p->name<<", "<<p->level<<" ]";
    return 0;
}