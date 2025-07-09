class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int minLen = INT_MAX;
    int left = 0, currsum = 0;

    for (int right = 0; right < n; right++) {
        currsum += nums[right];
        while (currsum >= target) {
            minLen = min(minLen, right - left + 1);
            currsum -= nums[left];
            left++;
        }
    }

    return (minLen == INT_MAX) ? 0 : minLen;
}

};