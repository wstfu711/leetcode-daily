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
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        inorderTraversal(root, pq);
        int i = 1;
        while(i < k){
            i++;
            pq.pop();
        }

        return pq.top();
    }

    void inorderTraversal(TreeNode* root, priority_queue<int, vector<int>, greater<int>>& pq){
        if(root != nullptr){
            pq.push(root->val);
            inorderTraversal(root->left, pq);
            inorderTraversal(root->right, pq);
        }
        else{
            return;
        }
    }
};
