class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int count = 0;
        int left = 0, right = people.size() - 1;
        while(left <= right){
            int weight = people[left] + people[right];
            count++;
            if(weight <= limit){
                left++;
                right--;
            }
            else{
                right--;
            }
        } 
        return count;
    }
};