class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n=nums.size();
        int fswap=-1;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                fswap=i-1;
                break;
            }

        }
        
        if(fswap!=-1){
            int rswap=fswap;
            for(int i=n-1;i>=fswap;i--){
                if(nums[fswap]<nums[i]){
                    rswap=i;
                    break;
                }
            }
            swap(nums[fswap],nums[rswap]);
        }
        
        reverse(nums.begin()+fswap+1,nums.end());
    }
};