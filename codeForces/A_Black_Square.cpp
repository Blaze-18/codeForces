#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 10;
    
    int a[n];
    for(int i = 1; i<=4; i++){
        cin>>a[i];
    }

    string str;
    cin>>str;

    int sum = 0; 

    for(int i = 0; i < str.length(); i++){
        
        int x = str[i] - '0';

        sum = sum + a[x]; 
    
    }

    cout<<sum<<endl;

    return 0;

}