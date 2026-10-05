class Solution {
  public:
    int countDigits(int n) {
        if(n <= 9) return 1;
        return 1+countDigits(n/10);
    }
};