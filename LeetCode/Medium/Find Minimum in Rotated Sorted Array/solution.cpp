class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        int i = 0;
        int j = n - 1;
        while(i <= j){
            int mid = i + (j - i)/2;
            int back = (mid-1)%n;
            int front = (mid+1)%n;
            if(back == -1) back = n-1;
            if(nums[back] > nums[mid] && nums[front] > nums[mid]) return nums[mid];
            else if(nums[mid] < nums[j]){
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        return -1;
    }
};