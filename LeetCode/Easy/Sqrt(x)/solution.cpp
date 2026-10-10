class Solution {
public:
    int mySqrt(int x) {
        long long int left = 0, right = 1;
        while(right*right < x){
            right *= 2;
        }
        while(left <= right){
            long long int mid = left + (right - left)/2;
            long long int sqr = mid * mid;
            if(sqr == x) return mid;
            else if(sqr > x){
                right = mid - 1;
            }
            else left = mid + 1;
        }
        return left - 1;
    }
};