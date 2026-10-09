class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        while(i < haystack.size()){
            if(haystack[i] == needle[0]){
                int x = i, y = 0;
                while(x < haystack.size() && y < needle.size()){
                    if(haystack[x] != needle[y]){
                        break;
                    }
                    x++;
                    y++;
                }
                if(y == needle.size()){
                    return i;
                }
            }
            i++;
        }
        return -1;
    }
};