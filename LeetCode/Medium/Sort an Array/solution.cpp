class Solution {
public:
    void merge(vector<int> &v, int start, int end){
        int mid = start + (end - start)/2;
        int i = start;
        int j = mid+1;

        vector<int> temp;
        while(i <= mid && j <= end){
            if(v[i] < v[j]){
                temp.push_back(v[i]);
                i++;
            }
            else{
                temp.push_back(v[j]);
                j++;
            }
        }
        while(i <= mid){
            temp.push_back(v[i]);
            i++;
        }
        while(j <= end){
            temp.push_back(v[j]);
            j++;
        }
        for(int x = start; x <= end; x++){
            v[x] = temp[x-start];
        }
    }


    void mergeSort(vector<int> &v, int start, int end){
        if(start == end){
            return;
        }
        int mid = start + (end - start)/2;
        mergeSort(v, start, mid);
        mergeSort(v, mid+1, end);
        merge(v, start, end);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};