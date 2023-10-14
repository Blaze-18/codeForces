#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector < long, long > v;
        vector < long, long> gcd;

        for(int i = 0; i < n; i++){
            long long x;
            cin>>x;
            v.push_back(x);
        }

        for(int i = 0; i < n; i+=2){
            int a = min(v[i], v[i+1]);
            int b = max(v[i], v[i+1]);
            int g = b%a;

            if(g == 0)
                gcd.push_back(a);
            if(g == 1)
                


        }


        
    }
}
