#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int sum = 0;
    int cnt = 0;
    int sum2 = 0;
    for(int i = 1; i <= n; i++ ){
        sum = sum + i;
        sum2 = sum2 + sum;
        
      //  cout<<" sum2 = "<<sum2<<" i = "<<i<<" cnt = "<<cnt <<endl;
        if(sum2 > n ){
            break;
        }
        cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}