class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> st;
        vector<int> res(temp.size(), 0);
        for(int i = 0; i < temp.size(); i++){
            if(st.empty()){
                st.push(i);
                continue;
            }
            while(!st.empty()){
                if(temp[st.top()] >= temp[i]){
                    break;
                }
                res[st.top()] = i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
};