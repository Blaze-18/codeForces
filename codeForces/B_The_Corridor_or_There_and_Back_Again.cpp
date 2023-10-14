#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector <int> room;
        while(n--){
            

            int d, s;
            cin>>d>>s;
            int range = 0;
            if(s%2 == 0)
                range = s/2 - 1;
            else
                range = s/2;
            
            int pos = d + range;

            room.push_back(pos);

        }

        sort(room.begin(), room.end());
        cout<<*room.begin()<<endl;
        room.clear();
    }
    return 0;
}