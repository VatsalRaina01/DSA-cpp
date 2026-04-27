class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currsum=nums[0]
        maxsum=nums[0]
        if len(nums)==1:
            return maxsum
        for i in range(1,len(nums)):
            currsum=max(currsum+nums[i],nums[i])
            maxsum=max(maxsum,currsum)

        return maxsum

        