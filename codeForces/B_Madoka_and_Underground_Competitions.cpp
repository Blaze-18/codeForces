#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k,r,c;
        cin>>n>>k>>r>>c;

        if(k == 1){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cout<<"X";
                }
                cout<<endl;
            }
            continue;
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if((i+j)%k == (r+c)%k){
                    cout<<"X";
                }
                else cout<<".";
            }
            cout<<endl;
        }

    }
    return 0;
}