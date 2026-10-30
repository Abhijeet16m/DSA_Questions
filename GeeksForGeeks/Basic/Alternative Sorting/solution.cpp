class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> res;
        int i = 0, j = arr.size()-1;
        while(i <= j){
            if(i == j){
                res.push_back(arr[i]);
                break;
            }
            res.push_back(arr[j]);
            res.push_back(arr[i]);
            i++;
            j--;
        }
        return res;
    }
};
