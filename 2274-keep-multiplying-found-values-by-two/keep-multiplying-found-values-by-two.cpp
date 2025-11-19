class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
       unordered_set<int> set1(nums.begin(),nums.end());
       while(set1.count(original)){
            original*=2;
       }
       return original;
    }
};