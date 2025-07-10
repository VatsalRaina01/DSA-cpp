class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res=2;
        if(nums.size()<=2)
            return nums.size();
        for(int i=2;i<nums.size();i++){
            if(nums[res-2]!=nums[i]){
                nums[res++]=nums[i];
                
            }

        }
        return res;
        
    }
};