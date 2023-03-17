class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        int max = 0;
        for(int i = arr.size()-1 ; i >= 0 ; --i){
            if(i == arr.size()-1){
                ans.push_back(-1);
            }
            else{
                ans.insert(ans.begin(), max);
            }
            if(max < arr[i]){
                max = arr[i];
            }
        }
        return ans;
    }
};
