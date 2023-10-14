#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    int ans = n;
    for(int i = 1; i <= n; i++){
        if(i%m == 0){
            n = n + 1;
        }
       // cout<<"n = "<<n<<endl;
    }
    
   
    cout<<n<<endl;

    return 0;
}