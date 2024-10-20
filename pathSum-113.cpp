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
    vector<vector<int>> ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return ans;
        vector<int> v;
        int sum = 0;
        dfs(v, root, targetSum, sum);
        return ans;
    }

    void dfs(vector<int> v, TreeNode* n, int t, int sum){
        v.push_back(n->val);
        sum += n->val;
        if(!n->left && !n->right){
            if(sum == t){
                ans.push_back(v);
            }
        }
        else{
            if(n->left) dfs(v, n->left, t, sum);
            if(n->right) dfs(v, n->right, t, sum);
        }
    }
};
