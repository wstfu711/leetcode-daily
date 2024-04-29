class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        int rt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            ans ^= nums[i];
        }
        ans ^= k;
        while(ans > 0){
            if(ans & 1){
                rt++;
            }
            ans >>= 1;
        }
        return rt;
    }
};
