#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int indx_mod = 0;
        int num_mod = 0;
        int a[n];
        int check[n];
        int cnt = 0;
        int even = 0;
        if(n == 1){
            int y;
            cin>>y;
            if(y%2 == 0)
                cout<<"0"<<endl;
            else
                cout<<"-1"<<endl;
            continue;
        }
        else{
        for(int i = 0; i < n;i++){
          //  cout << "i=" << i << endl;
            int x;
            cin>>x;
            a[i] = x;
            indx_mod = i%2;
            num_mod = x%2;
            // cout<<i<<"th Indx_mod = "<<indx_mod<<endl;
            // cout<<x<<" num_mod = "<<num_mod<<endl;
            
            if(num_mod == 0){
                even++;
            } 
            if(indx_mod == num_mod){

                check[i] = 1;
                cnt++;
            }
            else{
                check[i] = 0;
            }
            
        }
        int odd = n - even;
       // cout<<"cnt = "<<cnt<<endl;
        if(cnt == n){
            cout<<"0"<<endl;
            continue;
        }
        else{
            for(int i = 0; i < n; i++){
                if(check[i] == 1){
                    if(a[i] % 2 == 0){
                        even--;
                    }
                    else{
                        odd--;
                    }
                }
            }

            if(even == odd){
                cout<<even<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
            
        }

    }

    return 0;
}