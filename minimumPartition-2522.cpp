class Solution {
public:
    int minimumPartition(string s, int k) {
        int ans = 0;
        long long tmp = 0;
        for(int i = 0 ; i < s.size() ; i++){
            int n = s[i] - '0';
            tmp = tmp * 10 + n;
            if(tmp > k){
                ans++;
                tmp = n;
                if(tmp > k){
                    return -1;
                }
            }
        }
        ans++;
        return ans;
    }
};
