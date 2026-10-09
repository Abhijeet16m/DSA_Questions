class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int minDistance = INT_MAX;
        int MDSum = 0;
        for(int i = 0; i < n-2; i++){
            int j = i+1, k = n-1;
            while(j < k){
                int curr = nums[i] + nums[j] + nums[k];
                int dis = abs(curr - target);
                if(dis < minDistance){
                    minDistance = dis;
                    MDSum = curr;
                }
                if(curr == target) return target;
                else if(curr > target) k--;
                else if(curr < target) j++; 
            }
        }
        return MDSum;
    }
};