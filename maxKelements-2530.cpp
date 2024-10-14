class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i = 0 ; i < nums.size() ; i++){
            pq.push(nums[i]);
        }
        int n = 0;
        long long ans = 0;
        while(n < k){
            ans += pq.top();
            int num = pq.top() / 3;
            if(pq.top() % 3) num++;
            pq.pop();
            pq.push(num);
            n++;
        }
        return ans;
    }
};
