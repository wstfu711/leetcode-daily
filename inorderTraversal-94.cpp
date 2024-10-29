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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        rec(root, ans);
        return ans;
    }

    void rec(TreeNode* n, vector<int>& ans){
        if(n->left) rec(n->left, ans);
        ans.push_back(n->val);
        if(n->right) rec(n->right, ans);
    }
};
