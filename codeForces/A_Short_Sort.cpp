#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        
        string s;
        cin>>s;

        if(s == "abc"){
            cout<<"YES\n";
        }

        else{
            string s1 = s.substr(0,2);
            string s2 = s.substr(1,2);

            if(s1 == "ca" || s2 == "ca"){
                cout<<"NO\n";
            }
            else
                cout<<"YES\n";
        }
    
    }
    
    return 0;
}