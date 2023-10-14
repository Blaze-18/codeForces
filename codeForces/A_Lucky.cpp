#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int sum1 = 0;
        for(int i  = 0; i < 3; i++){
            int a = s[i] - '0';
            sum1 = sum1 + a;
        }
        int sum2 = 0;
        for(int i = 3 ; i < 6; i++){
            int b = s[i]- '0';
            sum2 = sum2 + b;
        }
        if(sum1 == sum2)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
    return 0;
}