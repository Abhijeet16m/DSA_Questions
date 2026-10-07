class Solution {
vector<string> res;
string temp = "";
public:
    void helper(int i, int n, int k, int cost, char pre){
        if(i == n){
            res.push_back(temp);
            return;
        }
        temp+='0';
        helper(i+1, n, k, cost, '0');
        temp.pop_back();
        if((cost+i) <= k && pre!='1'){
            temp+='1';
            helper(i+1, n, k, cost+i, '1');
            temp.pop_back();
        }
    }
    vector<string> generateValidStrings(int n, int k) {
        helper(0, n, k, 0, '0');
        return res;
    }
};