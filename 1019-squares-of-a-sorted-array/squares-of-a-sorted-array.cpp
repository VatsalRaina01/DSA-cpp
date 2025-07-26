class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int st=0,end=n-1,k=n-1;
        while(st<=end){
            if(abs(nums[st])>abs(nums[end])){
                 ans[k]=nums[st]*nums[st];
                 st++;}
            else {
                ans[k]=nums[end]*nums[end];
                end--;}
                k--;

        }
        return ans;
        
    }
};