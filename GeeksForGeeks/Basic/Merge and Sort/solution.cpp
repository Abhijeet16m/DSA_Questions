class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        set<int> s;
        for(int i: arr1) s.emplace(i);
        for(int i: arr2) s.emplace(i);
        vector<int> v(s.begin(), s.end());
        return v;
    }
};