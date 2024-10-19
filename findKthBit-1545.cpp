class Solution {
public:
    char findKthBit(int n, int k) {
        return find(n, k);
    }

    char find(int n, int k) {
        if (n == 1) return '0';
        int len = (1 << n) - 1;
        if (k == len / 2 + 1) return '1';
        else if (k <= len / 2) return find(n - 1, k);
        else return find(n - 1, len - k + 1) == '0' ? '1' : '0';
    }
};
