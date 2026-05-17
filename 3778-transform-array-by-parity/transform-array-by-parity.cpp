class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> res;
        int even=0;
        int odd=0;
        for(auto &num:nums){
            if(num%2==0){
                num=0;
            }else{
                num=1;
            }}
        sort(nums.begin(),nums.end());
        return nums;
    }
};