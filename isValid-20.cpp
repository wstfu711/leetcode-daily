class Solution {
public:
    bool isValid(string s) {
        stack<char> pa;
        bool ans = true;

        for(int i = 0 ; i < s.length() ; ++i){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                pa.push(s[i]);
            }
            else{
                if(pa.empty()){
                    return false;
                    break;
                }
                else if(pa.top() == '(' && s[i] != ')'){
                    return false;
                    break;
                }
                else if(pa.top() == '{' && s[i] != '}'){
                    return false;
                    break;
                }
                else if(pa.top() == '[' && s[i] != ']'){
                    return false;
                    break;
                }
                pa.pop();
            }
        }
        if(pa.empty()){
            return ans;
        }
        else{
            return false;
        }
    }
};
