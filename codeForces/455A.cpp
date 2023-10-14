#include<bits/stdc++.h>
using namespace std;
vector<int> v2;
vector <int> v1;
int main(){

    int n;
    cin>>n;

   
    int x;
    for(int i = 0; i < n; i++){
        cin>>x;
        v1.push_back(x);
    }

    map<int,int> u_map;

    for(int i = 0; i < n; ++i){
        u_map[v1[i]]++;
    }

    v1.clear();
    
    for(auto it = u_map.begin(); it != u_map.end();it++){
        v1.push_back(it->first);
        v2.push_back(it->second);
    }
   
    if(v1.size() == 1){
        cout<<v1[0]*v2[0]<<endl;
    }
    else if(v1.size() == 2){
        int mul1 = v1[0]*v2[0];
        int mul2 = v1[1]*v2[1];
        cout<<max(mul1,mul2)<<endl;
    }
    else{
    int sum = 0;
    int x = 0, y = 0, z = 0, a = 0;
    for(int i = v1.size()-1; i >= 0; i-- ){

        if(v1[i] - v1[i-1] == 1){
            x = v1[i]*v2[i];
            y = v1[i-1]*v2[i-1];

            if(x>=y){
                sum = sum + x;
                //cout<<i<<"th sum* = "<<sum <<endl;
                i--;
                continue;
            }
            int check = v1[i-1] - v1[i-2];
            if(y>x && check == 1 && (i-2) >=0 ){
                int z = v1[i-2]*v2[i-2];
                int h = x+z;
                sum = sum + max(y,h);
               // cout<<i<<"th sum** = "<<sum <<endl;
                i = i - 2;
                continue;
            }
            if(y>x && check !=1 ){
                sum = sum + y;
               // cout<<i<<"th sum*** = "<<sum <<endl;
                i--;
                continue;
            }
            
        }
        sum = sum + v1[i]*v2[i];
        //cout<<i<<"th sum**** = "<<sum <<endl;
    }

    cout<<sum<<endl;
    
    }
    
    return 0;
}