class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i : asteroids){
            if(i < 0){
                while(!st.empty()){
                    int t = st.top();
                    if(t < 0) break;
                    if(t > (-1*i)){
                        i = 0;
                        break;
                    }
                    if(t == (-1*i)){
                        st.pop();
                        i = 0;
                        break;
                    }
                    st.pop();
                }
            }
            if(i != 0) st.push(i);
        }
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};