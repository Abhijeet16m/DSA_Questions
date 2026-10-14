#include<bits/stdc++.h>
using namespace std;
 
int toBorrow(int k, int n, int w){
    long long ans = (k*(w*(w+1)/2) - n);
    if(ans < 0) ans = 0;
    return ans;
}
 
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    cout<<toBorrow(k,n,w);
    return 0;
}