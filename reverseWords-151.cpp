class Solution {
public:
    string reverseWords(string s) {
        string ans;
        reverse(s.begin(), s.end());
        stack<char> st;
        int check = 0;
        s+=' ';

        for(int i = 0 ; i < s.length() ; ++i){
            if(s[i] != ' '){
                if(st.empty() and ans != ""){
                    ans += " ";
                }
                st.push(s[i]);
            }
            else if(s[i] == ' '){
                while(!st.empty()){
                    ans += st.top();
                    st.pop();
                }
            }
            
        }

        return ans;
    }
};
