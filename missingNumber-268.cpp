class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a = nums.size();
        int output = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < a ; i++){
            if(nums[i] != i){
                output = i;
                break;
            }
            if(i == a-1){
                output = a;
            }
        }

        return output;
    }
};
