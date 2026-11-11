class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // variables 
        unordered_map<char, int> mp;
        int longest = 0;
        // sliding window pointer
        int i = 0;
        int j = 0;

        // main loop
        while(j < s.size()){
            mp[s[j]]++;
            while(mp[s[j]] != 1){
                mp[s[i]]--;
                i++;
            }
            longest = max(longest, j-i+1);
            j++;
        }
        return longest;
    }
};