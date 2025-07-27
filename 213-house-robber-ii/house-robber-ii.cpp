class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size(),skip=0,steal=0,res1=0,res2=0;
        vector<int> t(n+1,0);
        if(n==1) return nums[0];
        t[0]=0;
        for(int i=1;i<=n-1;i++){
            skip=t[i-1];
            steal=nums[i-1]+((i-2)>=0?t[i-2]:0);
            t[i]=max(skip,steal);
        }
        res1=t[n-1];

        t.clear();
        t[0]=0;
        t[1]=0;
        
        for(int i=2;i<=n;i++){
            skip=t[i-1];
            steal=nums[i-1]+((i-2)>=0?t[i-2]:0);
            t[i]=max(skip,steal);
        }
//         for(int i = 2; i<=n; i++) {
// //             t[i] = max(t[i-1] , nums[i-1]+ ((i-2 >= 0) ? t[i-2] : 0 ));
// //         }
        res2=t[n];

        return max(res1,res2);

         }
};
// class Solution {
// public:
//     int n;
    
//     int rob(vector<int>& nums) {
//         n = nums.size();
//         if(n == 1)
//             return nums[0];
        
//         vector<int> t(n+1, 0);
//         //t[i] = Max money gained from i houses
        
//         int result1 = 0;
//         int result2 = 0;
        
//         //Case-1 (Take from 1st House - Hence skip the last house)
//         t[0] = 0;
//         for(int i = 1; i<=n-1; i++) {
//             t[i] = max(t[i-1] , nums[i-1]+ ((i-2 >= 0) ? t[i-2] : 0 ));
//         }
//         result1 = t[n-1];
        
//         t.clear();
//         //Case-2 (Take from 2nd House - Hence take the last house)
//         t[0] = 0;
//         t[1] = 0;
//         for(int i = 2; i<=n; i++) {
//             t[i] = max(t[i-1] , nums[i-1]+ ((i-2 >= 0) ? t[i-2] : 0 ));
//         }
//         result2 = t[n];
        
//         return max(result1, result2);
        
//     }
// };