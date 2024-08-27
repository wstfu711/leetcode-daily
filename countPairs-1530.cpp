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
    int countPairs(TreeNode* root, int distance) {
        int ans = 0;
        dfs(root, distance, ans);
        return ans;
    }

private:
    vector<int> dfs(TreeNode* node, int distance, int& ans) {
        if (!node) return {};
        if (!node->left && !node->right) return {1};

        vector<int> leftDistances = dfs(node->left, distance, ans);
        vector<int> rightDistances = dfs(node->right, distance, ans);
        for (int ld : leftDistances) {
            for (int rd : rightDistances) {
                if (ld + rd <= distance) {
                    ans++;
                }
            }
        }

        vector<int> currentDistances;
        for (int ld : leftDistances) {
            if (ld + 1 <= distance) currentDistances.push_back(ld + 1);
        }
        for (int rd : rightDistances) {
            if (rd + 1 <= distance) currentDistances.push_back(rd + 1);
        }

        return currentDistances;
    }
};
