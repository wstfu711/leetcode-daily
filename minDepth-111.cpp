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
    int minDepth(TreeNode* root) {
        return dfs(root);
    }

    int dfs(TreeNode* node){
        if (!node) return 0;
        if (!node->left && !node->right) return 1;
        if (!node->left) return dfs(node->right) + 1;
        if (!node->right) return dfs(node->left) + 1;
        
        return min(dfs(node->left), dfs(node->right)) + 1;
    }
};
