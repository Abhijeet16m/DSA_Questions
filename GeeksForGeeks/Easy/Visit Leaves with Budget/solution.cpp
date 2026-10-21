/* Binary Tree Node Structure
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int lvl = 1;
    vector<int> cost;
    void helper(Node* root){
        if(!root) return;
        if(!root->left && !root->right){
            cost.push_back(lvl);
            return;
        }
        lvl++;
        helper(root->left);
        helper(root->right);
        lvl--;
    }
    int getCount(Node *root, int k) {
        lvl = 1;
        cost.clear();
        helper(root);
        sort(cost.begin(), cost.end());
        int currSum = 0;
        int i = 0;
        while(i < cost.size()){
            currSum += cost[i];
            if(currSum > k){
                break;
            }
            i++;
        }
        return i;
    }
};