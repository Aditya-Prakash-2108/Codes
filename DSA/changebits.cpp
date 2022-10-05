#include <bits/stdc++.h>

using namespace std;

vector<int> changeBits(int N) {
        vector<int> res;
        int sum=0, sum1=0;
        while(N>0){
            res.push_back(N%2);
            N/=2;
        }
        for(int i=0; i<res.size(); i++){
            if(res.at(i)==1){
                sum+=pow(2,i);
            }
            sum1+=pow(2,i);
        }
        res.clear();
        res.push_back(sum);
        cout<<sum1-sum;
        return res;
    }
    
int main()
{
    int num;
    vector<int> m;
    cin>>num;
    m=changeBits(num);
    for(int it=0; m.size(); it++){
        cout<<m.at(it);
    }
    return 0;
}
