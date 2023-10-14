#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n, m, lx, ly, d;
        cin>>n>>m>>lx>>ly>>d;

        int check = abs(n - lx) + abs(m-ly);
        //cout<<"Check = "<<check<<endl;

        if(check <= d)
            cout<<"-1"<<endl;
        else{
            
            int plus_row = lx+d;
            int minus_row = lx - d;
            int plus_col = ly+d;
            int minus_col = ly - d;
            bool ans = true;

            if(plus_row >= n && plus_col >= m) ans = false;
            else if(minus_row <= 1 && minus_col <= 1) ans = false;
            else if(plus_row >= n && minus_row <= 1) ans = false;
            else if(plus_col >= m && minus_col <= 1) ans = false;

            if(ans)
                cout<<n+m-2<<endl;
            else{
                cout<<"-1"<<endl;
            }

        }
         
    }
    return 0;
}
