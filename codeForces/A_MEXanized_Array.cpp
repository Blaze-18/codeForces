
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        int check = k - x;
        if(x < k && check > 1){
            cout<<"-1"<<endl;
            continue;
        }

            int i = 0;
            int sum = 0;
            for(i = 0; i < k; i++){
                if(i > x)
                    break;
                sum = sum + i;
            }

          //  cout<<"sum = "<<sum<<endl;
          //  cout<<"i = "<<i<<endl;
            int rem = n - i;
            if(rem < 0){
                cout<<"-1"<<endl;
                continue;
            }
            //cout<<"rem = "<<rem<<endl;
            if(k == x){
                sum = sum + (x-1)*rem;
            }else
                sum = sum + (x*rem);

            cout<<sum<<endl;
        
    }
    return 0;
}