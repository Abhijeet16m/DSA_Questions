bool cmp(string a, string b){
    return a+b >  b+a;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> numbers; 
        for(int i: nums){
            if(i == 0){
                numbers.push_back("0");
                continue;
            }
            string num = "";
            while(i != 0){
                num += (i%10)+'0';
                i/=10;
            }   
            reverse(num.begin(), num.end());
            numbers.push_back(num);
        }
        sort(numbers.begin(), numbers.end(), cmp);
        string res = "";
        for(string i: numbers){
            res += i;
        }
        if(res[0] == '0') return "0";
        return res;
    }
};