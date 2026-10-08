class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0, j = 0;
        int n = height.size();
        int count = 0;
        stack<int> st;
        while(i < n){
            if(i == n-1){
                break;
            }
            if(height[i] > height[i+1]){
                break;
            }
            i++;
        } 
        j = i + 1;
        while(i < n && j < n){
            while(j < n){
                if(j == n-1){
                    if(height[j] >= height[j-1]) break;
                }
                else if(height[j] >= height[j-1] && height[j] > height[j+1]){
                    break;
                }
                j++;
            }
            if(j == n){
                break;
            }
            if(height[j] < height[i]){
                if(st.empty()){
                    st.push(j);
                }
                else if(height[j] < height[st.top()]){
                    st.push(j);
                }
                else{
                    while(!st.empty() && height[j] >= height[st.top()]){
                        st.pop();
                    }
                    st.push(j);
                }
                j++;
                continue;
            }
            int topLevel = min(height[i], height[j]);
            i++;
            while(i < j){
                if(height[i] < topLevel){
                    count += topLevel - height[i];
                }
                i++;
            }
            st = {};
            j = i + 1;
        }
        while(!st.empty()){
            int y = st.top();
            int x;
            st.pop();
            if(st.empty()){
                x = i;
            }
            else{
                x = st.top();
            }
            int topLevel = min(height[x], height[y]);
            x++;
            while(x < y){
                if(height[x] < topLevel){
                    count+= topLevel - height[x];
                }
                x++;
            }
        }
        return count;
    }
};