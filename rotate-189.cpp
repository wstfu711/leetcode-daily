class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> v;
        stack<int> s;
        for(int i = 0 ; i < k ; i++){
            s.push(nums[n-1-i]);
        }
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        for(int i = 0 ; i < nums.size() - k; i++){
            v.push_back(nums[i]);
        }
        nums = v;
    }
};
