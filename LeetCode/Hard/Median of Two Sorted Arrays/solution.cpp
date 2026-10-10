class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        vector<int> merged;
        int i = 0, j = 0;
        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                merged.push_back(nums1[i]);
                i++;
            }
            else{
                merged.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m){
            merged.push_back(nums1[i]);
            i++;
        }
        while(j < n){
            merged.push_back(nums2[j]);
            j++;
        }
        int mid = (m+n)/2;
        if((m+n)%2){
            return (double)merged[mid];
        }
        else{
            return ((double)merged[mid-1] + (double)merged[mid])/2;
        }
    }
};