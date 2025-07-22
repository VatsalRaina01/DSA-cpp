class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int> mp(10001,-1);
        vector<int> ps(n,0);
        ps[0]=nums[0];
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+nums[i];
        }
        int i=0,j=0,sum=0;
        while(j<n){
            i=max(i,mp[nums[j]]+1);
            int jsum=ps[j];
            int isum=i-1 < 0 ? 0 : ps[i-1];
            sum=max(sum,(jsum-isum));
            mp[nums[j]]=j;

            j++;
        }
        return sum;
    }
};