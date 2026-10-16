class Solution {
  public:
    bool ispalindrome(int a){
        if(a < 9) return true;
        int rev = 0;
        int temp = a;
        while(temp != 0){
            rev = rev*10 + (temp%10);
            temp/=10;
        }
        return a == rev;
    }
    bool isPalinArray(vector<int> &arr) {
        for(int i: arr){
            if(!ispalindrome(i)) return false;
        }
        return true;
    }
};