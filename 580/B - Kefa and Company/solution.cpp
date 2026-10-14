#include<bits/stdc++.h>
using namespace std;
 
bool helper(pair<int, int>p1, pair<int, int> p2){
    if(p1.first == p2.first) {
        return p1.second > p2.second;
    }
    return p1.first < p2.first;
}
 
int main(){
    int n, d; cin>>n>>d;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++){
        int a, b;
        cin>>a>>b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), helper);
    int i = 0, j = 0;
    long long int f_Factor = 0;
    long long int currfact = 0;
    while (j < v.size())    
    {
        currfact += v[j].second;
        while((v[j].first - v[i].first) >= d){
            currfact -= v[i].second;
            i++;
        }
        j++;
        f_Factor = max(f_Factor, currfact);
    }
    cout<<f_Factor;
    return 0;
}
 