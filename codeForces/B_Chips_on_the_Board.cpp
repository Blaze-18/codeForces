#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n),b(n);
        long long suma = 0;
        for(int i  = 0; i < n; i++){
           cin>>a[i];
           suma = suma + a[i];
        }
        long long sumb = 0;
        for(int i = 0; i < n; i++){
            cin>>b[i];
            sumb = sumb + b[i];
        }
       // cout<<"suma = "<<suma<<" sumb = "<<sumb<<endl;

        long long amin = *min_element(a.begin(),a.end());
        long long bmin = *min_element(b.begin(),b.end());

      //  cout<<"amin = "<<amin<<" bmin = "<<bmin<<endl;

       

        long long s1 = (bmin*n) + suma;
        long long s2 = (amin*n) + sumb;
       // cout<<"s1 = "<<s1<<" s2 = "<<s2<<endl;
        cout<<min(s1,s2)<<endl;


    }

    return 0;
}