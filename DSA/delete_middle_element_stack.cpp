#include<bits/stdc++.h>
using namespace std;
   
void rem_mid(stack <int> &s, int size, int cnt){
    // base case
    if(cnt == size/2){
        s.pop();
        return;
    }
    int el = s.top();
    s.pop();
    rem_mid(s, size, cnt+1);
    s.push(el);
}
void display(stack <int> s){
    stack <int> temp(s);
    for(int i=0 ; i<s.size(); i++){
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl; 

}
int main(){
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    rem_mid(st, st.size(), 0);
    display(st);
    return 0;
}