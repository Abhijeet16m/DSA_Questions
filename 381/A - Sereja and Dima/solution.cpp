#include<bits/stdc++.h>
using namespace std;
 
vector<int> play(vector<int> &v){
    int n = v.size();
    vector<int> score = {0, 0};
    bool player = false;
    int left = 0, right = n-1;
    for(int i = 0; i < n; i++){
        if(v[left] > v[right]){
            score[(int)player] += v[left];
            left++;
        }
        else{
            score[(int)player] += v[right];
            right--;
        }
        player = !player;
    }
    return score;
}
 
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    vector<int> score = play(v);
    cout<<score[0]<<" "<<score[1];
    return 0;
}