class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        map<char, char> mp;
        mp['('] = ')';
        mp['{'] = '}';
        mp['['] = ']';
        for(char i: s){
            if(i == '(' || i == '{' || i == '['){
                st.push(i);
            }
            else{
                if(st.empty()) return false;
                if(i != mp[st.top()]) return false;
                st.pop();
            } 
        }
        return st.empty();
    }
};