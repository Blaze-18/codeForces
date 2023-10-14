#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector <int> m;
    vector <int>c;

    while(n--){

        int a,b;

        cin>>a>>b;
        if(a>b){
            m.push_back(1);
            c.push_back(0);
        }
        if(a<b){
            c.push_back(1);
            m.push_back(0);
        }
        else{
            c.push_back(0);
            m.push_back(0);
        }
    }
    int sum1 = accumulate(m.begin(),m.end(),0);
    int sum2 = accumulate(c.begin(),c.end(),0);

    if(sum1 > sum2){
        cout<<"Mishka"<<endl;
    }
    else if(sum1 < sum2){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }

    return 0;
}