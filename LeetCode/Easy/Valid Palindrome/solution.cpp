class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += ('a' - 'A');
        }
        int i = 0, j = s.size()-1;
        while(i < j){
            while(((s[i] > 'z' || s[i] < 'a') && (s[i] > '9' || s[i] < '0')) && i < j) i++;
            while(((s[j] > 'z' || s[j] < 'a') && (s[j] > '9' || s[j] < '0')) && i < j) j--;
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};