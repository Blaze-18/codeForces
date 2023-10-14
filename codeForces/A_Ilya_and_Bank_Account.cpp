#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;

    if(n>=0){
        cout<<n<<endl;
    }
    else{
        long long x = (-1) * n;

        int a = x%10;
        x = x/10;
        int b = x%10;
       // cout<<x<<" "<<"a = " <<a<<" b = "<<b<<endl;
        long long y = (-1)*n;
        string s;
        
        if(a>b){
            s = to_string(y);
           // cout<<s<<endl;
            auto pos = s.end()-1;
            s.erase(pos);           
        }

        else{
            s = to_string(y);
            //cout<<s<<endl;
            auto pos = s.end()-2;
            s.erase(pos);
        }
        //cout<<s[0]<<endl;
        if(s[0] == '0')
            cout<<s<<endl;
        else{
            cout<<"-"<<s<<endl;
        }

    }
    return 0;
}