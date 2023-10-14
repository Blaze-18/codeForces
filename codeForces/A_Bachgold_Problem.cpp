#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n%2 == 0){
        int ans = n/2;
        cout<<ans<<endl;
        for(int i = 0; i < n/2; i++){
            cout<<"2 ";
        }
    }
    else{
        int a = n-3;
        int ans = n/2;
        cout<<ans<<endl;

        for(int i = 0; i < a/2; i++)
            cout<<"2 ";
        
        cout<<3;
    }


}