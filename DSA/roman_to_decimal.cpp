#include<bits/stdc++.h>
using namespace std;
   
int value(char roman){
    switch (roman){
    case 'I': {return 1;
                break;}
    case 'V': {return 5;
                break;}
    case 'X': {return 10;
                break;}
    case 'L': {return 50;
                break;}
    case 'C': {return 100;
                break;}
    case 'D': {return 500;
                break;}
    case 'M': {return 1000;
                break;}
    default: {return -1;
                break;}
    }
} 
void display(int num){
    cout<<"Decimal representation of Roman Number "<<num;
}
void operation(string &s){
    int i, len=s.length();
    int a[len], sum=0;
    string:: iterator it;
    i=0;
    for(it=s.begin(); it!=s.end(); it++){
        a[i]=value(*it);
        i++;
    }
    a[len+1]=-1;
    for(i=0; i<len-1; i++){
        if(a[1]==-1){
            sum+=a[0];
            display(sum);
        }
        if(a[i]==a[i+1]){
            sum+=a[i]+a[i+1];
        }
        else if(a[i]>a[i+1]){
            if(a[i+1]<a[i+2]){
                sum+=a[i+2]-a[i+1];
            }
            else if(a[i+1]>=a[i+2]){
                sum+=a[i+2]+a[i+1];
            }
                i++;
        }
        else{
            sum+=a[i+1]-a[i];
        }
    }
    display(sum);
}   
int main(){
    string s;
    cin>>s;
    operation(s);
    return 0;
}