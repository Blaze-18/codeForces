#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    char a[n*m];
    bool flag = false;
    for(int i = 0; i < n*m; i++){
        cin>>a[i];
    }
    
    for(int i = 0; i < n*m; i++){
        char x = a[i];
         if(x == 'C' || x == 'M' || x == 'Y'){
            flag = true;
            break;
         }
    }

    if(flag)
        cout<<"#Color\n";
    else
        cout<<"#Black&White\n";

    
}