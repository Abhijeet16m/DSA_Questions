#include<bits/stdc++.h>
using namespace std;
 
vector<bool> canReach(vector<pair<int, int>> &coords){
    vector<bool> result;
    for(pair<int, int> i: coords){
        result.push_back(!(i.first%2 && i.second%2));
    }
    return result;
}
 
int main(){
    int n; cin>>n;
    int x, y;
    vector<pair<int, int>> coords;
    for(int i = 0; i < n; i++){
        cin>>x>>y;
        coords.push_back({x,y});
    }   
    vector<bool> result = canReach(coords);
    for(bool i: result){
        cout<<((i)?"YES":"NO")<<endl;
    }
    return 0;
}