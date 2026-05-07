class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> newans;

        int i=0;
        int j=n;

        while(j<nums.size()){
            newans.push_back(nums[i]);
            newans.push_back(nums[j]);
            i++;
            j++;
        }
        return newans;
    }
};