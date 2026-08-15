class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=nums[0];
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;i++){
            x^=nums[i];
        }
        if(x!=0) return n;
        bool zero=true;
        for(int num:nums){
            if(num!=0){
                zero=false;
                break;
            }
        }
        return zero==false?n-1:0;
    }
};