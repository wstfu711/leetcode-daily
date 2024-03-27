class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans = 0;
        int l = nums.size();
        int pr = 1;
        for(int i = 0 ; i < l ; i++){
            for(int j = i ; j < l ; j++){
                pr = pr * nums[j];
                if(pr < k){
                    ans++;
                }
                else{
                    break;
                }
            }
            pr = 1;
        }
        return ans;
    }
};
