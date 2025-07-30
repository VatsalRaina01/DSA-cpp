class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxval=0;
        int res=0;
        int sar=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxval){
                maxval=nums[i];
                res=0;
                sar=0;
            }
            if(maxval==nums[i]){
                sar++;
            }else{
                sar=0;
            }
            res=max(res,sar);

        }
        return res;
    }
};