class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = "";

        
        if(n != 0){
            for(int i = 1; i < n ; ++i){
                if(strs[i-1].length() < strs[i].length()){
                    string temp = strs[i-1];
                    strs[i-1] = strs[i];
                    strs[i] = temp;
                }
            }

            for(int i = 0 ; i < strs[n-1].length() ; ++i){
                int check = 0;
                for(int j = 0 ; j < n-1 ; ++j){
                    if(strs[j][i] == strs[n-1][i]){
                        check++;
                    }
                }
                if(check != n-1){
                    break;
                }
                else{
                    ans = ans + strs[n-1][i];
                }
            }
        }

        return ans;
    }
};
