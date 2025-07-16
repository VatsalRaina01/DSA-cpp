class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int odd=0;
        int even =0;
        int p=nums[0]%2;
        int al=1;
        for(int &num:nums){
            if(num%2==0){
                even++;
            }
            else{
                odd++;
            }
            if(num%2!=p){
                al++;
                p=1-p;

            }


        }
        return max({odd,even,al});
    }
};