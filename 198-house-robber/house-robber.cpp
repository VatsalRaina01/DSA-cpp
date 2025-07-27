class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size(),skip=0,steal=0;
        vector<int> t(n+1,0);
        if(n==1) return nums[0];
        t[0]=0;
        t[1]=nums[0];
        for(int i=2;i<=n;i++){
            skip=t[i-1];
            steal=nums[i-1]+t[i-2];
            t[i]=max(skip,steal);
        }
        

        return t[n];
        
    }
};