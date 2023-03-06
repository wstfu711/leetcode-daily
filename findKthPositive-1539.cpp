class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 1;
        int j = 0;
        int ans = 0;
        while(i > 0){
            if(ans == k){
                ans = i-1;
                break;
            }
            if(j == arr.size()){
                i++;
                ans++;
            }
            else if(j < arr.size() and arr[j] == i){
                i++;
                j++;
            }
            else if(arr[j] > i){
                i++;
                ans++;
            }
        }
        return ans;
    }
};
