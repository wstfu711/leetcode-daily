class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        for(int i = 0 ; i < arr2.size() ; ++i){
            int a = count(arr1.begin() , arr1.end() , arr2[i]);
            for(int j = 1 ; j <= a ; ++j){
                ans.push_back(arr2[i]);
            }
            remove(arr1.begin() , arr1.end() , arr2[i]);
        }

        sort(arr1.begin() , arr1.end());

        for(int i = 0 ; i < arr1.size() ; ++i){
            if(count(ans.begin() , ans.end() , arr1[i]) == 0){
                ans.push_back(arr1[i]);
            }
        }

        return ans;
    }
};
