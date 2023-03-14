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
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        if(root == nullptr){
            return 0;
        }
        sumOfroot(root, 0, ans);
        return ans;
    }

    void sumOfroot(TreeNode *root, int sum, int& ans){
        sum = sum * 10 + root->val;
        if(root->left == nullptr and root->right == nullptr){
            ans += sum;
        }
        if(root->left != nullptr){
            sumOfroot(root->left, sum, ans);
        }
        if(root->right != nullptr){
            sumOfroot(root->right, sum, ans);
        }
    }
};
