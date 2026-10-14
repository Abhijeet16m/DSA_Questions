#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        for(int i = 0; i < (n/2); i++){
            cout<<v[i]<<" "<<v[n-1-i]<<" ";
        }
        if(n%2) cout<<v[(n/2)];
        cout<<endl;
    }
    return 0;
}