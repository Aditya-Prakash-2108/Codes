#include<bits/stdc++.h>
using namespace std;

void removeadj(string str){
    for(int i=0; i<str.length(); i++){
        if(str[i]==str[i+1]){
            str.erase(i,1);
        }
    }

    cout<<"Final string is "<<str;
}
   
int main(){
    string s;
    cout<<"Enter the string "<<endl;
    cin>>s;
    removeadj(s);
    return 0;
}