class Solution {
public:
    vector<string> res;
    string temp = "";
    void openCloseBrackets(int open, int close, int n){
        if(open+close == 2*n){
            res.push_back(temp);
            return;
        }
        if(open < n){
            temp+='(';
            openCloseBrackets(open+1, close, n);
            temp.pop_back();
            if(open > close){
                temp+=')';
                openCloseBrackets(open, close+1, n);
                temp.pop_back();
            }
        }
        else{
            temp+=')';
            openCloseBrackets(open, close+1, n);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        openCloseBrackets(0, 0, n);
        return res;
    }
};