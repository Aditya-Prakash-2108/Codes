//objects to class and pointers to the class
#include<bits/stdc++.h>
using namespace std;

class playerstats{
    private:
        int health=10;
        string name="Anthony";
        char level='A';
    public:

        int gethealth(){
            return health;
        }
        string getname(){
            return name;
        }
        char getlevel(){
            return level;
        }
        void sethealth(int h){
            health=h;
        }
        void setname(string str){
            name=str;
        }
        void setlevel(char l){
            level=l;
        }
};  
int main(){
    playerstats ps;
    cout<<"checking health "<<ps.gethealth()<<endl;
    cout<<"Your name is: "<<ps.getname()<<endl;
    cout<<"Your current level: "<<ps.getlevel()<<endl;
    string s="Lucifer";
    char c=ps.getlevel()+1;
    cout<<"Your health is being replinished: "<<endl;
    ps.sethealth(100);
    cout<<"Your name is being changed to Lucifer for privacy reasons: "<<endl;
    ps.setname(s);
    cout<<"Your level is increased by one "<<endl;
    ps.setlevel(c);
    cout<<"your new stats are as follows: "<<endl;
    cout<<"checking health "<<ps.gethealth()<<endl;
    cout<<"Your name is: "<<ps.getname()<<endl;
    cout<<"Your current level: "<<ps.getlevel()<<endl;
    return 0;
}