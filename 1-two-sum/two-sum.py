class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        ar={}
        for i,val in enumerate(nums):
           rm=target-nums[i]
           if(rm in ar):
            return[i,ar[rm]]
           else:
            ar[val]=i