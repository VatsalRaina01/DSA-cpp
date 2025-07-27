class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int res=0,n=nums.size();
        int i=0,j=1;
        while(j+1<n){
            if((nums[i]<nums[j] && nums[j]>nums[j+1]) 
            ||(nums[i]>nums[j] && nums[j]<nums[j+1])){
                res++;
                i=j;
            }
           j++;
        }
        return res;
    }
};