class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size();
        int n = t.size();
        if(m < n) return "";
        map<char, int> mp;
        for(char i: t){
            mp[i]++;
        }
        int left = 0, right = 0;
        int count = 0;
        int minDistance = INT_MAX;
        pair<int, int> index = {-1, -1};
        while(right < m){
            if(mp.count(s[right])){
                if(mp[s[right]] > 0) count++;
                mp[s[right]]--;
            }
            while(count == n){
                int dis = right - left + 1;
                if(dis < minDistance){
                    minDistance = dis;
                    index.first = left;
                    index.second = right;
                }
                if(mp.count(s[left])){
                    if(mp[s[left]] == 0) count--;
                    mp[s[left]]++;
                }
                left++;
            }
            right++;
        }
        if(index.first == -1 && index.second == -1){
            return "";
        }
        string res = "";
        for(int i = index.first; i <= index.second; i++){
            res += s[i];
        }
        return res;
    }
};