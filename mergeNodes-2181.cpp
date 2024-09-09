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
    ListNode* mergeNodes(ListNode* head) {
        int n = 0;
        ListNode* ans = new ListNode();
        ListNode* pt = ans;
        head = head->next;
        while(head){
            if(head->val == 0){
                pt->next = new ListNode(n);
                pt = pt->next;
                n = 0;
            }
            else{
                n += head->val;
            }
            head = head->next;
        }
        return ans->next;
    }
};
