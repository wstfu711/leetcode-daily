class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& s) {
        sort(seats.begin(), seats.end());
        sort(s.begin(), s.end());
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            int n = abs(seats[i] - s[i]);
            ans += n;
        }
        return ans;
    }
};
