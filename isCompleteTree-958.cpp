class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool flag = false;
        while (!q.empty()) {
            TreeNode* cur = q.front();
            q.pop();
            if (cur == nullptr) {
                flag = true;
                continue;
            }
            if (flag) {
                return false;
            }
            q.push(cur->left);
            q.push(cur->right);
        }
        return true;
    }
};
