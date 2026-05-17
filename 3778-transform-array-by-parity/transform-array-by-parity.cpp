class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> res;
        int even=0;
        int odd=0;
        for(auto &num:nums){
            if(num%2==0){
                res.push_back(0);
            }else{
                odd++;
            }
        }
        while(odd) {
            res.push_back(1);
            odd--;
        }
        return res;
    }
};