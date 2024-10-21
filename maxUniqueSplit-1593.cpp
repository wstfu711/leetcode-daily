class Solution {
public:
    unordered_set<string> us;
    int maxUniqueSplit(string s) {
        return backtrack(s, 0);
    }

    int backtrack(string s, int st){
        if(st == s.size()) return 0;
        int m = 0;
        for (int i = st + 1; i <= s.size(); i++) {
            string sub = s.substr(st, i - st);
            if (us.find(sub) == us.end()) {
                us.insert(sub);
                m = max(m, 1 + backtrack(s, i));
                us.erase(sub);
            }
        }
        return m;
    }
};
