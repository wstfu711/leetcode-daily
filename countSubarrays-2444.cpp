class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int minpt = -1 , maxpt = -1;
        int firstnum = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] >= minK && nums[i] <= maxK){
                if(nums[i] == minK){
                    minpt = i;
                }
                if(nums[i] == maxK){
                    maxpt = i;
                }
                long long num = min(minpt, maxpt) - firstnum;
                if( num > 0){
                    ans += num;
                }
            }
            else{
                firstnum = i;
                minpt = -1;
                maxpt = -1;
            }
        }
        return ans;
    }
};
