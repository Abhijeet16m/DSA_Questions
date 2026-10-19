class Solution {
  public:
    string longest(vector<string>& arr) {
        int maxLength = 0;
        string word = "";
        for(auto i: arr){
            if(i.size() > maxLength){
                maxLength = i.size();
                word = i;
            }
        }
        return word;
    }
};
