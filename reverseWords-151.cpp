class Solution {
public:
    string reverseWords(string s) {
        string ans;
        reverse(s.begin(), s.end());
        stack<char> st;
        int check = 0;

        for(int i = 0 ; i < s.length() ; ++i){
            if(s[i] != ' '){
                st.push(s[i]);
                if(check == 0){
                    check++;
                }
            }
            else if(s[i] == ' ' and check != 0){
                for(int j = 0 ; j < st.size() ; ++j){
                    ans += st.top();
                    st.pop();
                    if(j == st.size() - 1){
                        ans += ' ';
                    }
                }
            }
        }

        return ans;
    }
};
