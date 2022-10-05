//Remove all the substrings from the main string
#include<bits/stdc++.h>
using namespace std;
   
void removeallouccurences(string str, string sub){
    while(str.length()!=0 && str.find(sub)<str.length()){
        str.erase(str.find(sub),sub.length());
    }
    cout<<str;
}   
int main(){
    string s, ss;
    cout<<"Enter the string";
    cin>>s;
    cout<<"Enter the substring";
    cin>>ss;
    removeallouccurences(s,ss);
    return 0;
}