class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> mp(begin(nums),end(nums));
        for(int i=1;i<=nums.size();i++){
            if(!mp.count(i)) ans.push_back(i);}
        return ans;}

};