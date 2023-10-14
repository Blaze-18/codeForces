#include <bits/stdc++.h>
using namespace std;
int main()
{

    int k;
    cin>>k;
    int sum = 0;
    int i;

    for(i = 0; i < k; i++){
        sum = sum + i;
    }

    sum = sum + (k+1);
    i++;
    cout<<sum<<endl;

    int n,x;
    cin>>n>>x;

    sum = sum + (x*(n-i));

    cout<<sum<<endl; 
}