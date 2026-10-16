class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        vector<int> v = {INT_MAX, INT_MIN};
        for(int i: arr){
            v[0] = min(v[0], i);
            v[1] = max(v[1], i);
        }
        return v;
    }
};