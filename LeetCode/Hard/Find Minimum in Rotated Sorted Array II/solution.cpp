class Solution {
public:
    int findMin(vector<int>& nums) {
        int res = INT_MAX;
        for(int i: nums) res = min(res, i);
        return res;
    }
};