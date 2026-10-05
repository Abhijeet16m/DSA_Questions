class Solution {
  public:
    int recursivePower(int n, int p) {
        if(p == 0){
            return 1;
        }
        int mul = 1;
        if(p%2) mul = n;
        int part = recursivePower(n, p/2);
        return mul*part*part;
    }
};
