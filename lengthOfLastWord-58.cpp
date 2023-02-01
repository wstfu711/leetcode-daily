class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;

        for(int i = s.size() - 1 ; i >= 0 ; --i){
            if(s[i] == ' '){
                if(i == s.size() - 1){
                    while(s[i] == ' '){
                        i--;
                    }
                    i++;
                }
                else{
                    break;
                }
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};
