class Solution {
  public:
    vector<vector<int>> ans;
    vector<int> temp;
    void helper(int i, int n, vector<int>& arr){
        if(i == n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(arr[i]);
        helper(i+1, n, arr);
        temp.pop_back();
        helper(i+1, n, arr);
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        helper(0, arr.size(), arr);
        return ans;
    }
};