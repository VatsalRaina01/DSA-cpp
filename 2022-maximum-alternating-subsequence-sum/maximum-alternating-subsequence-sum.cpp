class Solution {
public:
    long long t[100001][2];

    long long solveA(int idx,vector<int>& nums,bool flag){
        if(idx>=nums.size()) return 0;
        long long val=nums[idx];
        if(t[idx][flag]!=-1) return t[idx][flag];

        
        long long take=solveA(idx+1,nums,flag);
        if(flag==false){
            val=-val;
        }
        long long without=val+solveA(idx+1,nums,!flag);
        
        
        return t[idx][flag]=max(take,without);

    }
    long long maxAlternatingSum(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        
        return solveA(0,nums,true);
        
    }
};