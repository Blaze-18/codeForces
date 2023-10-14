#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    vector <int> runs;
    
    while(t--){
        int n, a, p;
        cin>>n>>a>>p;
    
        string s;
        cin>>s; 
        int plus = a;

        if(n == a){
            cout<<"YES\n";
            continue;
        }
        bool flag = false;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '+'){
                plus++;
                a++;
            }
            else{
                plus--;
            }
            if(plus == n){
                flag = true;
                break;
            }
        }

        if(flag)
            cout<<"YES\n";
        else{
            if(a >= n)
                cout<<"MAYBE\n";
            else{
                cout<<"NO\n";
            }
        }
       
    }

    return 0;
}