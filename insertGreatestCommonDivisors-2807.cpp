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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ans = new ListNode(head->val);
        ListNode* tmp = ans;
        int prev = head->val;
        head = head->next;
        while(head){
            int n = gcd(prev, head->val);
            ListNode* cur1 = new ListNode(n);
            ListNode* cur2 = new ListNode(head->val);
            tmp->next = cur1;
            tmp = tmp->next;
            tmp->next = cur2;
            tmp = tmp->next;
            prev = head->val;
            head = head->next;
        }

        return ans;
    }
};
