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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* pt = ans;
        int cr = 0;
        while(l1 != nullptr || l2 != nullptr || cr != 0){
            int sum = 0, a = 0, b = 0;
            if(l1 != nullptr){ a = l1->val; l1 = l1->next; }
            if(l2 != nullptr){ b = l2->val; l2 = l2->next; }
            sum = a + b + cr;
            cr = sum / 10;
            sum %= 10;
            ListNode* n = new ListNode(sum);
            pt->next = n;
            pt = pt->next;
        }
        return ans->next;
    }
};
