class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxnum=0;
        int maxnum2=0;
        for(int num:nums){
            if(num>maxnum){
            
                maxnum2=maxnum;
                maxnum=num;
            }
            else if(num>maxnum2 && num<=maxnum ){
                maxnum2=num;
            }
            else continue;
        }
        return (maxnum-1)* (maxnum2-1);

    }
};