#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        long long x,y,n;
        cin>>x>>y>>n;

        long long rem = n%x;
      // cout<<"remainder : "<<rem<<endl;
        long long ans;
        if(rem == y){
            ans = n;
           // cout<<"if case : "<<ans<<endl;
        }
        else{
        
            long long sub = rem-y;
            if(sub > 0)
                ans = n - sub;
            else{
                
                int mul = n - rem;
                int check = mul - x;
                ans = check + y; 

            }
           // cout<<"else case : "<<ans<<endl;

        }
        cout<<ans<<endl;
    }

    return 0;
}