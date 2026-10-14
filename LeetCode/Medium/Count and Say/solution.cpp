class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for(int x = 0; x < n-1; x++){
            string temp = "";
            int i = 0, j = 0;
            int count = 0;
            while(j < res.size()){
                if(res[i] == res[j]){
                    count++;
                    j++;
                }else{
                    temp += to_string(count);
                    count = 0;
                    temp += res[i];
                    i = j;
                }
            }
            temp += to_string(count);
            temp += res[i];
            res = temp;
        }
        return res;
    }
};