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
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        return isMirror(root->left, root->right);
    }

    bool isMirror(TreeNode *l, TreeNode *r){
        if(l == nullptr and r == nullptr){
            return true;
        }
        if(l == nullptr or r == nullptr){
            return false;
        }
        return (l->val == r-> val) and isMirror(l->left, r->right) and isMirror(l->right, r->left);
    }
};
