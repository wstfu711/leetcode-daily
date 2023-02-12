class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int ans = 0;

        string num_s = to_string(num);
        for(int i = 0 ; i < num_s.size() - k + 1 ; ++i){
            int tar = 0;
            for(int j = 0 ; j < k ; ++j){
                int a = num_s[i+j] - '0';
                tar = tar*10 + a;
            }
            if(tar != 0 and num % tar == 0){
                ans++;
            }
        }

        return ans;
    }
};
