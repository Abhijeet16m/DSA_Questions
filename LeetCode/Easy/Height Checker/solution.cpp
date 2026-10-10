class Solution {
public:

    int heightChecker(vector<int>& heights) {
        vector<int> temp;
        for(int i: heights){
            temp.push_back(i);
        }    
        sort(temp.begin(), temp.end());
        int count = 0;
        for(int i = 0; i < heights.size(); i++){
            if(temp[i] != heights[i]) count++;
        }
        return count;
    }
};