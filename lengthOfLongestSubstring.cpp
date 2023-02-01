/*class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> v;
        vector<char> temp;
        int con = 0;
        
        for(int i = 0 ; i < s.size() ; ++i){
            if(i == 0){
                v.push_back(s[0]);
            }
            for(int j = 0 ; j < i ; ++j){
                if(v[j] == s[i]){
                    con = 1;
                }
                if(con == 1){
                    temp.push_back(s[j+1]);
                }
            }
            if(con == 1){
                v = temp;
                temp.clear();
                con = 0;
            }
            else{
                v.push_back(s[i]);
            }
        }
        return v.size();
    }
};
run time error*/

