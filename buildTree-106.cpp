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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build(inorder, postorder, 0, inorder.size()-1, 0, postorder.size()-1);
    }

    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int ins, int ine, int posts, int poste){
        if(ins > ine){
            return nullptr;
        }
        int rval = postorder[poste];
        int rindex = ins;
        while(inorder[rindex] != rval){
            rindex++;
        }
        int lefts = rindex - ins;
        int rights = ine - rindex;
        TreeNode* root = new TreeNode(rval);
        root->left = build(inorder, postorder, ins, rindex-1, posts, posts+lefts-1);
        root->right = build(inorder, postorder, rindex+1, ine, poste-rights, poste-1);
        return root;
    }
};
