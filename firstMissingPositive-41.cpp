class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int output = 0;
        int pt = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > 0){
                if(pt == nums[i]){
                    pt++;
                }
                else{
                    if(i != 0){
                        if(nums[i] != nums[i-1]){
                            output = pt;
                            break;
                        }
                    }
                    else{
                        output = pt;
                        break;
                    }
                }
            }
            if(i == nums.size()-1){
                output = pt;
            }
        }
        return output;
    }
}; 
