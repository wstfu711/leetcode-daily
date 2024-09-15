class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int, int> pos;
        pos[0] = -1;
        int mask = 0;
        int maxLength = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'a') {
                mask ^= 1 << 0;
            } else if (s[i] == 'e') {
                mask ^= 1 << 1;
            } else if (s[i] == 'i') {
                mask ^= 1 << 2;
            } else if (s[i] == 'o') {
                mask ^= 1 << 3;
            } else if (s[i] == 'u') {
                mask ^= 1 << 4;
            }
            if (pos.find(mask) != pos.end()) {
                maxLength = max(maxLength, i - pos[mask]);
            } else {
                pos[mask] = i;
            }
        }

        return maxLength;
    }
};
