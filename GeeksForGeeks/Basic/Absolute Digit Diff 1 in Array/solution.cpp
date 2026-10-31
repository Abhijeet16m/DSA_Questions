class Solution {
  public:
    bool helper(int n){
        int pre = n%10;
        n/=10;
        while(n != 0){
            if(abs(n%10 - pre) != 1) return false;
            pre = n%10;
            n/=10;
        }
        return true;
    }
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        vector<int> res;
        for(int i: arr){
            if(i >= 10 && i < k){
                if(helper(i)) res.push_back(i);
            }
        }
        return res;
    }
};