class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> s;
        string ans = "";
        int i = 0;
        while(word[i] != ch && i < word.size()){
            s.push(word[i]);
            i++;
        }
        if(i != word.size()){
            ans += ch;
            while(s.size() > 0){
                char c = s.top();
                s.pop();
                ans += c;
            }
            i++;
            while(i < word.size()){
                ans += word[i];
                i++;
            }
            return ans;
        }
        else{
            return word;
        }
    }
};
