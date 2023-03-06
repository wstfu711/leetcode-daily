class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        //a = 97
        string ans = "";
        stack<char> c;
        long sum = 0;
        for(int i = s.length()-1 ; i >= 0 ; --i){
            sum += shifts[i];
            int a = int(s[i]) + (sum%26);
            if(a > 122){
                a -= 26;
            }
            c.push(char(a));
        }
        while(!c.empty()){
            ans += c.top();
            c.pop();
        }
        return ans;
    }
};
