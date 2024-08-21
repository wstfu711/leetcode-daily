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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0 ; i < lists.size() ; i++){
            while(lists[i] != nullptr){
                pq.push(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        ListNode* ans = new ListNode();
        ListNode* pt = ans;
        while(!pq.empty()){
            ListNode* n = new ListNode(pq.top());
            pt->next = n;
            pt = pt->next;
            pq.pop();
        }
        return ans->next;
    }
};
