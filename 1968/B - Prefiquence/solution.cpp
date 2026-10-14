#include<bits/stdc++.h>
using namespace std;
 
int prefix(string s1, string s2, int n, int m){
    int i = 0, j = 0;
    while (i<n && j<m)
    {
        if(s1[i] == s2[j]) i++;
        j++;
    }
    return i;
}
 
int main(){
    int t, n, m;
    string s1, s2;
    cin>>t;
    while (t--){
        cin>>n>>m>>s1>>s2;
        cout<<prefix(s1, s2, n, m)<<endl;
    }
    return 0;
}