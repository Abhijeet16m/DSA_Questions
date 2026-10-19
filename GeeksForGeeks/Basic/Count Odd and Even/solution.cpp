class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        int odd = 0;
        int even = 0;
        for(int i: arr){
            if(i%2) odd++;
            else even++;
        }
        return {odd, even};
        
    }
};