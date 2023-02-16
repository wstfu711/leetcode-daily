class Solution {
public:
    string decodeString(string s) {
        string ans = "";
        string tmp = "";
        stack<string> st;

        for(int i = 0 ; i < s.length() ; ++i){
            if(s[i] != ']'){
                string a = "";
                a += s[i];
                st.push(a);
            }
            else if(s[i] == ']'){
                while(st.top() != "["){
                    tmp += st.top();
                    st.pop();
                }
                st.pop();
                if(isdigit(st.top()[0])){
                    int time = 10;
                    int k = stoi(st.top());
                    st.pop();
                    while(!st.empty() and isdigit(st.top()[0])){
                        k = k + (time * stoi(st.top()));
                        time *= 10;
                        st.pop();
                    }
                    string tmp2 = tmp;
                    if(k == 1){
                        st.push(tmp);
                    }
                    while(k>1){
                        tmp+=tmp2;
                        k--;
                        if(k == 1){
                            st.push(tmp);
                        }
                    }
                    tmp = "";
                }
                else if(st.empty() or !isdigit(st.top()[0])){
                    st.push(tmp);
                }
            }
        }
        while(st.empty() == false){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
