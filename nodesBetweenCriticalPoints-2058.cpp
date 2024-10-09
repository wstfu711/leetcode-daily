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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next) return {-1, -1};
        queue<int> q;
        vector<int> v;
        int index = 1;
        ListNode* curr = head->next;
        ListNode* prev = head;
        ListNode* next = curr->next;

        while (next) {
            q.push(curr->val);
            if ((curr->val > prev->val && curr->val > next->val) || 
                (curr->val < prev->val && curr->val < next->val)) {
                v.push_back(index);
            }
            prev = curr;
            curr = next;
            next = next->next;
            index++;
        }

        if (v.size() < 2) return {-1, -1};

        int Min = INT_MAX;
        int Max = v.back() - v.front();
        for (int i = 1; i < v.size(); i++) {
            Min = min(Min, v[i] - v[i - 1]);
        }

        return {Min, Max};
    }
};
