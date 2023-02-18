/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*> tmp;
        tmp.push(root);

        while(!tmp.empty()){
            TreeNode* n = tmp.top();
            tmp.pop();
            if (n != nullptr) {
                tmp.push(n->left);
                tmp.push(n->right);
                swap(n->left, n->right);
            }
        }

        return root;
    }
};
