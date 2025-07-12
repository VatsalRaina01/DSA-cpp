class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,ans=0;
        unordered_map<int,int> map;
        map[0]=1;
        for(auto& i: nums){
            sum+=i;
            int f=sum-k;
            if(map.find(f)!=map.end()){
                    ans+=map[f];
            }
            map[sum]++;
        }
        return ans;
        
    }
};