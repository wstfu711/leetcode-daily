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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k, nullptr);
        int s = 0;
        ListNode* tmp = head;
        while (tmp != nullptr) {
            s++;
            tmp = tmp->next;
        }

        int n = s % k, m = s / k;
        ListNode* curr = head;

        for (int i = 0; i < k; ++i) {
            ListNode* node = curr;
            ListNode* p = nullptr;
            int cur = m + (n > 0 ? 1 : 0);

            for (int j = 0; j < cur; ++j) {
                p = curr;
                if(curr != nullptr){
                    curr = curr->next;
                }
            }
            if(p){
                p->next = nullptr;
            }
            ans[i] = node;

            if(n > 0){
                n--;
            }
        }

        return ans;
    }
};
