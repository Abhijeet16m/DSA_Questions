/* Binary Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};
*/
class Solution {
  public:
    vector<int> largestValues(Node* root) {
        vector<int> res;
        if(!root) return res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int z = q.size();
            int l = INT_MIN;
            for(int i = 0; i < z; i++){
                Node* temp = q.front();
                q.pop();
                l = max(l, temp->data);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            res.push_back(l);
        }
        return res;
    }
};