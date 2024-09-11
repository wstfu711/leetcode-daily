class Solution {
public:
    int minBitFlips(int start, int goal) {
        int m = max(start, goal);
        int ans = 0;
        while(m > 0){
            if(start % 2 != goal % 2) ans++;
            start /= 2;
            goal /= 2;
            m /= 2;
        }

        return ans;
    }
};
