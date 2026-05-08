class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> fri(friends.begin(),friends.end());
        vector<int> res;
        for(int o :order){
            if(fri.count(o)){
                res.push_back(o);
            }
        }
        return res;
        
    }
};