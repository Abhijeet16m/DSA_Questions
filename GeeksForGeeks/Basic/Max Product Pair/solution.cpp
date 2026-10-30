class Solution {
  public:
    int maxProduct(vector<int>& arr) {
        int a = INT_MIN, b = INT_MIN;
        for(int i: arr){
            if(i >= a){
                b = a; a = i;
            }
            else if(i > b){
                b = i;
            }
        }
        return a*b;
    }
};