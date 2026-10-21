class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        long long int res = 0;
        int f = 0;
        if(date%2 == 0){
            f = 1;
        }
        for(int i = 0; i < car.size(); i++){
            if(car[i]%2 == f){
                res+=fine[i];
            }
        }
        return res;
    }
};