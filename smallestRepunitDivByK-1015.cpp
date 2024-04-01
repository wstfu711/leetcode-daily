#include <string>

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int ans = 1;
        std::string test = "1";
        if (k % 2 == 0 || k % 5 == 0) {
            return -1;
        }
        long long remainder = 1;
        while (remainder % k != 0) {
            ans++;
            remainder = (remainder * 10 + 1) % k;
            test += "1";
        }
        return ans;
    }
};
