#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    char c;
    string str = "codeforces";
    while(t--){
        cin>>c;
        bool flag = false;
        for(int i = 0; i < str.length(); i++){
            if(str[i] == c){
                flag = true;
                break;
            }
        }

        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}