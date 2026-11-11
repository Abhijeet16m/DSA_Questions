class Solution {
public:
    bool isValid(vector<int> & piles, int h, int speed){
        long long int time = 0;
        for(int i: piles){
            time += (i+speed-1)/speed;
        }
        return (time <= h);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int low = 1, high = INT_MIN, ans = -1;
        for(int i: piles){
            high = max(high, (long long)i);
        }
        while(low <= high){
            long long int mid = low + (high - low)/2;
            if(isValid(piles, h, mid)){
                ans = mid;
                high = mid - 1;  
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};