#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, t;
    cin>>n>>t;

    map <int, int> m;
    
    for(int i = 1; i <= n-1; i++){
        int a;
        cin>>a;
        m[i] = a + i;
    }

    for(auto it = m.begin(); it != m.end(); it++){
        cout<<"Key = "<<it->first<<" value = "<<it->second<<endl;
    }
    int key = 4;
    m[key];

    cout<<m[key]<<endl;
}