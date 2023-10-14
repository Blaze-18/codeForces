#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        string s ;
        cin>>s;
        int col = s.length();
        int ans = 0;
        int a[4] = {1, 3, 6, 10};
        int row = s[0] - '0';

        ans  = (row-1)*10 + a[col-1];
        cout<<ans<<endl;

    }
}