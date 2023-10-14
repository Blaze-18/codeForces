#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, t;
    cin>>n;
    cin>>t;

    map <int, int> m;

    for(int i = 1; i <= n-1; i++){
        int a;
        cin>>a;
        m[i] = a+i;
    }
    auto it = m.begin();
    while(1){
        
       // cout<<"key = "<<it->first<<" value = "<<it->second<<endl;        
        if(it->second == t){
            cout<<"YES\n";
            break;
        }
        int key = it->second;
        if(key > t){
            cout<<"NO\n";
            break;
        }

        it = m.find(key);
        // cout<<"**key = "<<it->first<<" **value = "<<it->second<<endl;
    }

    return 0;
}