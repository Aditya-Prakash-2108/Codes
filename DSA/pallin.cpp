// check whether a sentence is a pallindrome or not
#include <bits/stdc++.h>

using namespace std;

bool valid(char a){
    if((a>='a' && a<='z')||(a>='A' && a<='Z')||(a>='0' && a<='9')){
        return true;
    } 
    
    return false;
}
char ToLowerCase(char t){
    if(t>='a' && t<='z'){
        return t;
    }
    return t-'A'+'a';
}
bool pallin(string str){
    string val;
    for(int i=0; i<str.length(); i++){
        if(valid(str[i])){
            val.push_back(ToLowerCase(str[i]));
        }
    }
    int s=0, e=val.length()-1;
    while(s<val.length()/2){
        if(ToLowerCase(val[s])!=ToLowerCase(val[e])){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
void display(string a){
    if(pallin(a)){
        cout<<"The sentence entered is a pallindrome";
    }
    else{
        cout<<"The sentence entered is not a pallindrome";
    }
}
int main()
{
    string str;
    cout<<"Enter the sentence ";
    getline(cin,str);
    display(str);
    return 0;
}
