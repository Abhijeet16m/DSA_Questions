class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        for(int i = 0; i < n; i++){
            int left = i+1;
            int right = n-1;
            while(left < right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum == 0){
                    res.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if(sum > 0){
                    right--;
                }
                else{
                    left++;
                }   
            }
        }
        vector<vector<int>> ans;
        for(auto i: res){
            ans.push_back(i);
        }
        return ans;
    }
};