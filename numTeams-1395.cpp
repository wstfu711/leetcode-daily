class Solution {
public:
    int numTeams(vector<int>& r) {
        int ans = 0;
        for(int i = 1 ; i < r.size() - 1 ; i++){
            int ll = 0, ls = 0, rl = 0, rs = 0;
            for(int j = 0 ; j < i ; j++){
                if(r[j] > r[i]){
                    ll++;
                }
                else{
                    ls++;
                }
            }
            for(int j = i + 1 ; j < r.size() ; j++){
                if(r[j] > r[i]){
                    rl++;
                }
                else{
                    rs++;
                }
            }
            ans = ans + ll * rs + ls * rl ;
        }
        return ans;
    }
};
