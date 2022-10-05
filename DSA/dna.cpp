// user will enter a character in binary form convert it into char where 00->A  01->T  10->C  11->G
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, t;
    cin>>t;
    char  qtr;
    string str, res[t];
    l=0;
    for(int i=0; i<t; i++){
        cin>>n;
        cin>>str;
        for(int j=0; j<n; j+=2){
            if(str[j]=='0' && str[j+1]=='0'){
                qtr={'A'};
            }
            else if(str[j]=='0' && str[j+1]=='1'){
                qtr={'T'};
            }
            else if(str[j]=='1' && str[j+1]=='0'){
                qtr={'C'};
            }
            else if(str[j]=='1' && str[j+1]=='1'){
                qtr={'G'};
            }
            else
                return -1;
            res[i]+=qtr;
        }
    }
    for(int i=0; i<t; i++)
        cout<<res[i]<<'\n';
    return 0;
}
