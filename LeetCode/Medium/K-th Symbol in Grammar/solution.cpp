class Solution {
public:
    int kthGrammar(int n, int k) {
        // 1: 0
        // 2: 01
        // 3: 0110
        // 4: 01101001
        // 5: 0110100110010110
        // 6: 01101001100101101001011001101001
        if(n == 1) return 0;
        int length = (int)pow(2, n-1);
        if(k <= length/2){
            return kthGrammar(n-1, k);
        }
        return !kthGrammar(n-1, k-(length/2));
    }
};