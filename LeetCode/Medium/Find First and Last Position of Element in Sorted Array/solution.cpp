class Solution {
public:
    int upperBound(vector<int> &nums, int target){
        int index = -1;
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target){
                index = mid;
                left = mid + 1;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else left = mid + 1;
        }
        return index;
    }
    int lowerBound(vector<int> &nums, int target){
        int index = -1;
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target){
                index = mid;
                right = mid - 1;
            }
            else if(nums[mid] > target){
                right = mid - 1;
            }
            else left = mid + 1;
        }
        return index;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {lowerBound(nums, target), upperBound(nums, target)};
    }
};