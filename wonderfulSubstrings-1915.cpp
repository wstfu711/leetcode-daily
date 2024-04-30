class Solution {
public:
    long long wonderfulSubstrings(string word) {
        long long count = 0;
        unordered_map<int, int> freq;
        int mask = 0;
        freq[0] = 1;

        for (char c : word) {
            mask ^= 1 << (c - 'a');
            int odd = __builtin_popcount(mask);
            count += freq[mask];
            for (int i = 0; i < 10; i++) {
                int key = mask ^ (1 << i);
                count += freq[key];
            }
            freq[mask]++;
        }
        return count;
    }
};
