class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int f=1;
        int sum=0;
        for(int num:nums){
            sum+=num*f;
            f*=-1;

        }
        return sum;
    }
};