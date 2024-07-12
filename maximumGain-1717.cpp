class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int score = 0;
        stack<char> st;
        if (x > y) {
            for (char c : s) {
                if (!st.empty() && st.top() == 'a' && c == 'b') {
                    st.pop();
                    score += x;
                } else {
                    st.push(c);
                }
            }

            string remaining;
            while (!st.empty()) {
                remaining += st.top();
                st.pop();
            }
            reverse(remaining.begin(), remaining.end());

            for (char c : remaining) {
                if (!st.empty() && st.top() == 'b' && c == 'a') {
                    st.pop();
                    score += y;
                } else {
                    st.push(c);
                }
            }
        } else {
            for (char c : s) {
                if (!st.empty() && st.top() == 'b' && c == 'a') {
                    st.pop();
                    score += y;
                } else {
                    st.push(c);
                }
            }

            string remaining;
            while (!st.empty()) {
                remaining += st.top();
                st.pop();
            }
            reverse(remaining.begin(), remaining.end());

            for (char c : remaining) {
                if (!st.empty() && st.top() == 'a' && c == 'b') {
                    st.pop();
                    score += x;
                } else {
                    st.push(c);
                }
            }
        }

        return score;
    }
};
