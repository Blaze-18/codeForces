#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        string s1;
        string s2;

        cin>>s1>>s2;

        string str = s1+s2;
        int len = str.length();
        int cnt = 0;
        for(int i = 0; i < len-1; i++){
            if(str[i] == '*')
                continue;
            for(int j = i+1; j < len; j++){
                if(str[i] == str[j]){
                    cnt++;
                    str[j] = '*';
                }
            }
        }
        if(cnt == 0)
            cout<<"3"<<endl;
        else if(cnt == 1)
            cout<<"2"<<endl;
        else if(cnt == 2)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
        
    }

    return 0;
}