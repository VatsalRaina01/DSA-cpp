class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map <int,int> nummap;
      for(int i=0;i<nums.size();i++){
        int sub=target-nums[i];
        if(nummap.count(sub)){
            return {nummap[sub],i};
        }
        nummap[nums[i]]=i;
      }
      
    return {}; }
    };