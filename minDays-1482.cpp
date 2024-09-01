class Solution {
public:
    int minDays(vector<int>& b, int m, int k) {
        if(b.size() < (long long)m * k) return -1;

        int l = *min_element(b.begin(), b.end());
        int h = *max_element(b.begin(), b.end());
        while(l < h) {
            int mid = l + (h - l) / 2;
            int bq = 0, f = 0;
            for(int i = 0; i < b.size(); i++) {
                if (b[i] <= mid) {
                    f++;
                    if (f == k) {
                        bq++;
                        f = 0;
                    }
                } else {
                    f = 0;
                }
            }
            if (bq >= m) {
                h = mid;
            } else {
                l = mid + 1;
            }
        }
        return l;
    }
};
