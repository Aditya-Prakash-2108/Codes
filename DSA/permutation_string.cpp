// find substring from the string given that substring can be present in any order
#include<bits/stdc++.h>
using namespace std;

void checkperm(string str, string sub){
    int cnt=0, arr[26]={0};
    for(int i=0; i<str.length(); i++){
        arr[str[i]-'a']++;   
    }
    for(int i=0; i<str.length(); i+=sub.length()){
        
        
    }

}
   
int main(){
    string s, ss;
    cout<<"Enter the string ";
    cin>>s;
    cout<<"Enter the substring ";
    cin>>ss;
    cnt(s,ss);
    return 0;
}