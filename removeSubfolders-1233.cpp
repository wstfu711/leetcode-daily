class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        unordered_set<string> us;
        vector<string> ans;
        ans.push_back(folder[0]);
        us.insert(folder[0]);
        for(int i = 1 ; i < folder.size() ; i++){
            string s = "/";
            for(int j = 1 ; j < folder[i].size() ; j++){
                if(folder[i][j] == '/'){
                    if(us.find(s) != us.end()) break;
                }
                s += folder[i][j];
            }
            if(s == folder[i]){
                ans.push_back(s);
                us.insert(s);
            }
        }
        return ans;
    }
};
