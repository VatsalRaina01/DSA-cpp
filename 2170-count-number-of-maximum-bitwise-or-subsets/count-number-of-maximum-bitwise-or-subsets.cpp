class Solution {
public:
    int counttotalor(int idx,int curror,int maxor,vector<int>& nums){
        if(idx==nums.size()){
        if(curror==maxor)
            return 1;
        return 0;    }

        int without=counttotalor(idx+1,curror,maxor,nums);
        int with=counttotalor(idx+1,curror|nums[idx],maxor,nums);
        return with+without;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxor=0;
        for(int &num:nums){
            maxor|=num;
        }
        int curror=0;
        return counttotalor(0,curror,maxor,nums);
        
    }
};