class Solution {
public:
    bool isValid(string word) {
        bool vowelSeen = false;
        bool consonantSeen = false;
        if(word.size() < 3) return false;

        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        for(char i: word){
            if((i < '0' || i > '9') &&
               (i < 'a' || i > 'z') &&
               (i < 'A' || i > 'Z')
            ) return false;
            if(i >= '0' && i <= '9') continue;
            if(vowel.count(i)) vowelSeen = true;
            else consonantSeen = true;
        }
        return vowelSeen && consonantSeen;
    }
};