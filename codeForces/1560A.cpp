#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    vector<int> v;
    
    const int range = 1670;

    for(int i = 1; i < range; i++){
        if(i%3 == 0 || i%10 == 3){
            continue;
        }
        v.push_back(i);
    }
    /*for(int i = 0; i < 15; i++){
        cout<<v[i]<<" ";
    }
    */
    while(t--){
        int k;
        cin>>k;

        cout<<v[k-1]<<endl;
    }

    return 0;
}