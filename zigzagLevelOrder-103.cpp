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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        int a = 0;

        if(!root){
            return ans;
        }
        q.push(root);
        while(!q.empty()){
            int i = q.size();
            vector<int> v(i);
            int j = 0;
            int n = i;
            while(i--){
                TreeNode* t = q.front();
                q.pop();
                if(a % 2 == 0){
                    v[j] = t->val;
                }
                else{
                    v[n-j-1] = t->val;
                }
                j++;
                if(t->left != nullptr){
                    q.push(t->left);
                }
                if(t->right != nullptr){
                    q.push(t->right);
                }
            }
            a++;
            ans.push_back(v);
        }

        return ans;
    }
};
