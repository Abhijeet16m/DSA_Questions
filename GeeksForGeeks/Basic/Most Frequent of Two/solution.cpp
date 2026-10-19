class Solution {
  public:
    int moreFrequent(vector<int>& arr, int x, int y) {
        int freqA = 0;
        int freqB = 0;
        for(int i: arr){
            if(i==x) freqA++;
            if(i==y) freqB++;
        }
        if(freqA > freqB){
            return x;
        }
        else if(freqB > freqA){
            return y;
        }
        if(x>y) return y;
        return x;
        
    }
};