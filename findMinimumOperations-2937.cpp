class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n1 = s1.size(), n2 = s2.size(), n3 = s3.size();
        int n = min({n1, n2, n3});
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(s1[i] == s2[i] && s2[i] == s3[i]) ans++;
            else break;
        }
        if(ans == 0) return -1;
        else{
            ans = n1 + n2 + n3 - (3 * ans);
            return ans;
        }
    }
};
