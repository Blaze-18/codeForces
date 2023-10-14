#include<bits/stdc++.h>
using namespace std;
/*
    Note : The insertion and accessing elements of map has
    O(log n) time complexity.
    so inside a loop with n iteration accessing,inserting
    etc operations takes O(nlogn) time complexity

*/


int main(){

    //ordered map declaration : map <key, value> map_name;
    map <int, string> m;
    //assign keys and values
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    //insertion of keys and values
    m.insert({4,"afg"});

    //iterator declaration
    map<int, string> :: iterator it;

    //m.begin() function returns address of the first element of map
    //m.end() returns the end point kind of like null.
    for(it = m.begin(); it != m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
        //time complexity = O(nlogn)
    }
    //ordered map stores element in a sorted order of keys

    //some Functions of map

    auto it = m.find(3); //complexity log(n)
    //m.find(key_value) searches for the key value if found returns the iterator for that key else it returns m.end()

    if(it == m.end()){
        cout<<"Not found\n";
    } 
    else{
        cout<<it->first<<" "<<it->second<<endl;
    }

    m.erase(3); //eareses the key passed into it if found if not then gives m.end()
    //can also take iterator as argument m.erase(it) complexity = logn

    m.clear();//clears the whole map
    m.size(); //returns the size of the map





    
}
