class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans = -1;

        for(int i = 0 ; i < s.length() ; ++i){
            int tmp = -1;
            for(int j = i + 1 ; j < s.length() ; ++j){
                if(s[i] == s[j]){
                    tmp = j - 1 - i;
                }
            }
            if(ans < tmp){
                ans = tmp;
            }
        }

        return ans;
    }
};
