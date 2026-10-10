class Solution {
public:
    bool helper(vector<int> &nums, int n, int k){
        int count = 1;
        int curr = 0;
        for(int i: nums){
            curr+=i;
            if(curr > n){
                count++;
                curr = i;
            }
        }
        return (count <= k);
    }
    int splitArray(vector<int>& nums, int k) {
        int total = 0;
        int largest = INT_MIN;
        for(int i: nums){
            largest = max(largest, i);
            total += i;
        }
        int left = largest, right = total;
        int ans = largest;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(helper(nums, mid, k)){
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return ans;
    }
};