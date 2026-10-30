class Solution {
  public:
    int minMaxProduct(vector<int> &arr1, vector<int> &arr2) {
        int a = arr1[0];
        for(int i: arr1){
            if(i > a){
                a = i;
            }
        }
        int b = arr2[0];
        for(int i: arr2){
            if(i < b){
                b = i;
            }
        }
        return a*b;
    }
};