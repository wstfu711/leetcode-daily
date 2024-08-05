class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> um;
        for(int i = 0 ; i < arr.size() ; i++){
            if(um.count(arr[i]) > 0){
                um[arr[i]]++;
            }
            else{
                um[arr[i]] = 1;
            }
        }
        int count = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(um[arr[i]] == 1){
                count++;
            }
            if(count == k){
                return arr[i];
            }
        }
        return "";
    }
};
