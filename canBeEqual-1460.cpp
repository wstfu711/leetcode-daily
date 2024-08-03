class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        bool ans = true;
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        for(int i = 0 ; i < target.size() ; i++){
            if(target[i] != arr[i]){
                ans = false;
                break;
            }
        }
        return ans;
    }
};
