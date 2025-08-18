class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int tsum=0;
        for(auto &num:nums){
            tsum+=num;
        }
        int csum=0;
        for(int i=0;i<nums.size();i++){
            if(csum==tsum-nums[i]-csum){
                return i;
            }
            csum+=nums[i];
        }
        return -1;
    }
};