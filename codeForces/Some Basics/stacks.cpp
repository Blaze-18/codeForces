#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    queue <string> q;

    q.push("abc");
    q.push("bcd");
    q.push("pqr");
    q.push("rst");

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
        cout<<q.back()<<"*";
    }



}