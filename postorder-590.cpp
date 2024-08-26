/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        addToVector(ans, root);
        return ans;
    }

    void addToVector(vector<int>& ans, Node* node){
        if(node == NULL){
            return;
        }
        for(Node* child : node->children){
            addToVector(ans, child);
        }
        ans.push_back(node->val);
    }
};
