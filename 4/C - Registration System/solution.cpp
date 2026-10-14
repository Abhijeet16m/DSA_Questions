#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    map<string, int> profile;
    while (t--)
    {
        string s;
        cin>>s;
        if(profile[s] == 0){
            cout<<"OK";
        }
        else{
            cout<<s<<profile[s];
        }
        profile[s]++;
        cout<<endl;
    }
    
    return 0;
}