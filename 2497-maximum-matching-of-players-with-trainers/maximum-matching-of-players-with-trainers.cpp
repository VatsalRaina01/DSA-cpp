class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int a=players.size(),b=trainers.size(),count=0;
        for(int i=0,j=0;i<a && j<b;i++,j++){
            while(j<b && players[i]>trainers[j]){
                j++;
            }
            if(j<b){
                count++;
            }
        }
        return count;
        
    }
};