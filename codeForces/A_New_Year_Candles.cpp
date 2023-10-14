#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin>>a>>b;
    int ans = a;
    while(a/b){
        
        int rem = a%b;
        ans = ans + a/b;
        a = a/b + a%b;
     //out<<"cnt = "<<cnt <<" a = "<<a<<" rem = "<<rem<<" remcnt = "<<remcnt<<endl;

    }
    

    cout<<ans<<endl;

    return 0;
}