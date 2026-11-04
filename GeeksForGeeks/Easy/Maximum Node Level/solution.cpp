/* Structure of a Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    int maxNodeLevel(Node *root) {
        int size = 0;
        int level = -1;
        int currLevel = 0;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int z = q.size();
            vector<int> temp;
            while(z--){
                Node* t = q.front();
                q.pop();
                temp.push_back(t->data);
                
                // pushing next level
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(temp.size() > size){
                size = temp.size();
                level = currLevel;
            }
            currLevel++;
        }
        return level;
    }
};