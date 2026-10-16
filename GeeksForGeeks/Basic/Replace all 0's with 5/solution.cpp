class Solution {
  public:
    int convertFive(int n) {
        if(n == 0) return 5;
        int res = 0;
        int mul = 1;
        while(n != 0){
            int temp = n%10;
            if(temp == 0){
                temp = 5;
            }
            res = res + (temp*mul);
            n/=10;
            mul*=10;
        }
        return res;
    }
};