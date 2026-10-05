class Solution {
  public:
    void print(int i, int n){
        if(i > n){
            return;
        }
        cout<<i<<" ";
        print(i+1, n);
    }
    void printTillN(int n) {
        print(1, n);
    }
};