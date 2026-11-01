class Solution {
  public:
    int maxPackages(vector<int>& arr, int totalTime) {
        int i = 0; 
        int j = 0;
        int totalSum = 0;
        while(j < totalTime && j < arr.size()){
            totalSum += arr[j];
            j++;
        }
        int res = totalSum;
        while(j < arr.size()){
            totalSum -= arr[i];
            i++;
            totalSum += arr[j];
            j++;
            res = max(res, totalSum);
        }
        return res;
    }
};