class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int one = 0, zero = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                one++;
            }
        }
        if(one == 0 || one == nums.size()){
            return 0;
        }
        for (int i = 0; i < one; i++) {
            if (nums[i] == 0) {
                zero++;
            }
        }
        int ans = zero;
        for(int i = 1 ; i < nums.size() ; i++){
            int end = (one + i - 1) % nums.size();
            if(nums[i - 1] == 0){
                zero--;
            }
            if(nums[end] == 0){
                zero++;
            }
            ans = min(ans, zero);
        }
        return ans;
    }
};
