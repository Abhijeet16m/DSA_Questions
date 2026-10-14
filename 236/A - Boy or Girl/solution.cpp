#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    map<char, int> mp;
    for(char i: s){
        mp[i]++;
    }
    cout<<((mp.size() % 2)? "IGNORE HIM!": "CHAT WITH HER!")<<endl; 
    return 0;
}