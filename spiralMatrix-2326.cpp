/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));
        int x = 0, y = 0;
        int l = 0, r = n - 1, t = 0, b = m - 1;
        while (head) {
            ans[x][y] = head->val;
            head = head->next;
            if (x == t && y < r) {
                y++;
                if (y == r) t++;
            } 
            else if (y == r && x < b) {
                x++;
                if (x == b) r--;
            } 
            else if (x == b && y > l) {
                y--;
                if (y == l) b--;
            } 
            else if (y == l && x > t) {
                x--;
                if (x == t) l++;
            }
        }
        return ans;
    }
};
