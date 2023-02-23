class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int ans = -1; 
        int i = 0;
        int j = 0;
        while(ans == -1){
            if(nums1[i] > nums2[j]){
                j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else{
                ans = nums1[i];
            }
            if(i == nums1.size()){
                break;
            }
            if(j == nums2.size()){
                break;
            }
        }

        return ans;
    } 
};
