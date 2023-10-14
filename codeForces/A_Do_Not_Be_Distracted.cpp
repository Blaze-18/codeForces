#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string str;
        cin>>str;

        vector<char> v;
        set<char> s;

        for(int i = 0; i < str.length(); i++){
            
            if(i == 0){
                v.push_back(str[i]);
            }

            if(i > 0 && str[i] != str[i-1]){
                v.push_back(str[i]);
            }
            s.insert(str[i]);
        }

        if(v.size() != s.size()){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
       
    }

    return 0;
}