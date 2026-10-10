class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[right] == target) return right;
            if(nums[left] == target) return left;
    
            if(nums[mid] == target) return mid;
            else{
                // left side sorted
                if(nums[left] < nums[mid]){
                    if(target < nums[left]){
                        left = mid + 1;
                    }
                    else{
                        if(target > nums[mid]){
                            left = mid + 1;
                        }
                        else{
                            right = mid - 1;
                        }
                    }
                }
                // right side sorted
                else{
                    if(target > nums[right]){
                        right = mid - 1;
                    }
                    else{
                        if(target < nums[mid]){
                            right = mid - 1;
                        }
                        else{
                            left = mid + 1;
                        }
                    }
                }
            }
        }
        return -1;
    }
};