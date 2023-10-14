/*
    given N strings, print unique strings
    in lexographical order with their frequency

    N <= 10^5
    |s| <= 100

*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    map<string, int> m;
    int n;
    cin>>n;

    for(int i = 0; i < n; i++){
        string s;
        cin>>s;

        m[s] = m[s] + 1;

    }
    //time complexity : f(n) = n*sizeof(s)*logn **if size of tooo long then TLE

    for(auto it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
    
}