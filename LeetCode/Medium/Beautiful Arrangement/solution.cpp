class Solution {
public:
    map<int, int> mp;
    int helper(int i, int n){
        if(i > n){
            return 1;
        }
        int count = 0;
        for(int j = 1; j <= n; j++){
            if(mp[j] == 0 && (i%j == 0 || j%i == 0)){
                mp[j]++;
                count += helper(i+1, n);
                mp[j]--;
            }
        }
        return count;
    }
    int countArrangement(int n) {
        return helper(1, n);
    }
};