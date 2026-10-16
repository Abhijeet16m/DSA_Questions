class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        if(k == 0 || k == 1) return;
        auto start = arr.begin();
        auto end = arr.begin()+k;
        while(end <= arr.end()){
            reverse(start, end);
            start = end;
            end = start+k;
        }
        if(start != arr.end()){
            reverse(start, arr.end());
        }
    }
};
