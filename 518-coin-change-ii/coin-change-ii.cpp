class Solution {
public:
int t[301][5001];
    int solution(int pos,vector<int>& coins,int amount){
        if(amount==0) return t[pos][amount]=1;
        if(pos==coins.size() || amount<0) return 0;
        if(t[pos][amount]!=-1) return t[pos][amount];
        if(amount<coins[pos]) return t[pos][amount]=solution(pos+1,coins,amount);
        
        
        
        int take=solution(pos,coins,amount-coins[pos]);
        int skip=solution(pos+1,coins,amount);

        return t[pos][amount]=take+skip;




    } 
    int change(int amount, vector<int>& coins) {
        memset(t,-1,sizeof(t));
        return solution(0,coins,amount);
        
        
    }
};