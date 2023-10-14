#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(((c<a && c<b ) &&(d<a && d<b))|| (a<c && a<d) && (b<c && b<d)){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
        
    }

    return 0;
}