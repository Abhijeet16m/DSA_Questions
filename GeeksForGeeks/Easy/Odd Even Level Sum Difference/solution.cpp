/* The Node structure is
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
    int getLevelDiff(Node *root) {
        queue<Node*> q;
        q.push(root);
        int res = 0;
        int level = 0;
        while(!q.empty()){
            int t = 0;
            int z = q.size();
            while(z--){
                Node* temp = q.front();
                q.pop();
                t+=temp->data;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(level == 0) res += t;
            if(level == 1) res -= t;
            level = 1 - level;
        }
        return res;
    }
};