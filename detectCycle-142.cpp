/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head or !head->next){
            return NULL;
        }
        ListNode *f = head;
        ListNode *s = head;
        while(f != NULL and f->next != NULL){
            f = f->next->next;
            s = s->next;
            if(f == s){
                break;
            }
        }
        if(f != s){
            return NULL;
        }
        f = head;
        while(f != s){
            f = f->next;
            s = s->next;
        }
        return f;
    }
};
