#include<bits/stdc++.h>
using namespace std;

class quad{
    public:
        int x,y,z;
        quad(int A,int B,int C){
            x=A;
            y=B;
            z=C;
        }
};
void operation(quad* ptr){
    float x1, x2;
    int a,b,c;
    a=ptr->x;
    b=ptr->y;
    c=ptr->z;
    cout<<"control aa rha hai!";
    x1=(b+sqrt((b*b)-(4*a*c)))/2;
    x2=(b-sqrt((b*b)-(4*a*c)))/2;
    cout<<"First root= "<<x1;
    cout<<"Second root= "<<x2;
}
int main(){
    quad* ptr= NULL;
    int A,B,C;
    cout<<"Enter the values of a,b and c ";
    cin>>A>>B>>C;
    quad(A,B,C);
    operation(ptr);
    return 0;
}