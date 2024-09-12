class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> us;
        int ans = 0;
        for(int i = 0 ; i < allowed.size() ; i++){
            us.insert(allowed[i]);
        }
        for(int i = 0 ; i < words.size() ; i++){
            for(int j = 0 ; j < words[i].size() ; j++){
                if(us.find(words[i][j]) == us.end()){
                    break;
                }
                else if(j == words[i].size() - 1){
                    ans++;
                }
            }
        }
        return ans;
    }
};
