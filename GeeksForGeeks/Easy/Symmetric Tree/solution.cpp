/* Structure of binary tree node
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isSymmetric(Node* root) {
        queue<Node*> q;
        if(!root) return true;
        q.push(root);
        while(!q.empty()){
            vector<int> v;
            int z = q.size();
            for(int i = 0; i < z; i++){
                Node *temp = q.front();
                q.pop();
                if(temp == nullptr){
                    v.push_back(-1);
                    continue;
                }
                v.push_back(temp->data);
                q.push(temp->left);
                q.push(temp->right);
            }
            int n = v.size();
            for(int i = 0; i < n/2; i++){
                if(v[i] != v[n-1-i]) return false;
            }
        }
        return true;
    }
};