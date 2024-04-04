class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, temp = 0;
        char up = '(';
        char down = ')';
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == up){
                temp++;
            }
            else if(s[i] == down){
                if(temp > ans){
                    ans = temp;
                }
                temp--;
            }
        }
        return ans;
    }
};
