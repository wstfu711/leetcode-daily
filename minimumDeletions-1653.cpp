class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> dp_a(n, 0), dp_b(n, 0);

        if (s[0] == 'a') {
            dp_a[0] = 0;
            dp_b[0] = 1;
        }
        else {
            dp_a[0] = 1;
            dp_b[0] = 0;
        }
        for (int i = 1; i < n; ++i){
            if (s[i] == 'a') {
                dp_a[i] = dp_a[i-1];
                dp_b[i] = min(dp_a[i-1], dp_b[i-1] + 1);
            }
            else{
                dp_a[i] = dp_a[i-1] + 1;
                dp_b[i] = min(dp_a[i-1], dp_b[i-1]);
            }
        }
        return min(dp_a[n-1], dp_b[n-1]);
    }
};
