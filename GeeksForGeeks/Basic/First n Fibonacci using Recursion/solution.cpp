class Solution {
    public:
            
        vector<int> fibonacciNumbers(int n) {
            if(n == 1){
                return {0};
            }
            if(n == 2){
                return {0,1};
            }
            vector<int> v = fibonacciNumbers(n-1);
            int fibo = v[v.size()-1] + v[v.size()-2];
            v.push_back(fibo);
            return v;
        }
};