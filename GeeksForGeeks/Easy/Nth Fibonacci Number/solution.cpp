class Solution {
  public:
    int nthFibonacci(int n) {
        if(n == 0 || n == 1){
            return n;
        }
        int f0 = 0;
        int f1 = 1;
        int fibo;
        for(int i = 2; i <= n; i++){
            fibo = f0+f1;
            f0 = f1;
            f1 = fibo;
        }
        return fibo;
    }
};