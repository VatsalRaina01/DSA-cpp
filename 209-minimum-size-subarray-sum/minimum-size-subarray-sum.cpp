class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int minLen = INT_MAX;
    int left = 0, currsum = 0;

    for(int i=0;i<n;i++){
        currsum+=nums[i];
        while(currsum>=target){
            minLen=min(minLen,i-left+1);
            currsum-=nums[left];
            left++;
        }
    }
    return (minLen==INT_MAX)?0:minLen;
}

};