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
    ListNode* doubleIt(ListNode* head) {
        ListNode* current = head;
        while(current != nullptr){
            int v = current->val * 2;
            if(current->next != nullptr && current->next->val > 4){
                v++;
            }
            if(current == head){
                if(v > 9){
                    ListNode* node = new ListNode(1);
                    node->next = head;
                    head = node;
                    current->val = v - 10;
                }
                else{
                    current->val = v;
                }
            }
            else{
                if(v > 9){
                    current->val = v - 10;
                }
                else{
                    current->val = v;
                }
            }
            current = current->next;
        }
        return head;
    }
};
