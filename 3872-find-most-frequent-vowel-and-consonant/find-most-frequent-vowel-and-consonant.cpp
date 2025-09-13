class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;
        int maxv=0;
        int maxcon=0;
        for(char c:s){
            mp[c]++;
        }
        for(auto &it:mp){
            if(it.first=='a' || it.first=='e'||it.first=='i'||it.first=='o'||it.first=='u'){
                    int currv=it.second;
                    maxv=max(maxv,currv);
            }else{
                int currcon=it.second;
                maxcon=max(maxcon,currcon);
            }
        }
        return maxcon+maxv;

        
    }
};