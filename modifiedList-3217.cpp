class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> us;
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        for(int i = 0 ; i < nums.size() ; i++){
            us.insert(nums[i]);
        }
        while(head != nullptr){
            if(!us.count(head->val)){
                ListNode* newptr = new ListNode(head->val);
                curr->next = newptr;
                curr = curr->next;
            }
            head = head->next;
        }
        
        return ans->next;
    }
};
