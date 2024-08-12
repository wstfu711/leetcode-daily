class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n = -1;
        for(int i = arr.size() - 2 ; i >= 0 ; i--){
            if(arr[i] > arr[i + 1]){
                n = i;
                break;
            }
        }
        if(n == -1){
            return arr;
        }
        int j = arr.size() - 1;
        while(arr[j] >= arr[n]){
            j--;
        }
        while (arr[j] == arr[j - 1]) {
            j--;
        }
        swap(arr[n], arr[j]);
        return arr;
    }
};
