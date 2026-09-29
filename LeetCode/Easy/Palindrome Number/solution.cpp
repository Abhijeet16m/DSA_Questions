class Solution {
public:
    bool isPalindrome(int x) {
        long int rev = 0;
        int temp = x;
        while(x>0){
            rev = rev*10 + x%10;
            x/=10;
        }
        return rev == temp;
    }
};