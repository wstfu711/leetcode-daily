class Solution {
public:
    int maxSubarrayLength(std::vector<int>& nums, int k) {
        int left = 0, right = 0, ans = 0;
        std::unordered_map<int, int> freq;
        while (right < nums.size()) {
            freq[nums[right]]++;
            while (freq[nums[right]] > k) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0)
                    freq.erase(nums[left]);
                left++;
            }
            ans = std::max(ans, right - left + 1);
            right++;
        }

        return ans;
    }
};
