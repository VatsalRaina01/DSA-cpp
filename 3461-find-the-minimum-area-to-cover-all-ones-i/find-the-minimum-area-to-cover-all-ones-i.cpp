class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int leftcol=n;
        int rightcol=-1;
        int toprow=m;
        int botrow=-1;

        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    leftcol=min(leftcol,j);
                    rightcol=max(rightcol,j);
                    botrow=max(botrow,i);
                    toprow=min(toprow,i);
                    
                }
            }

        return (rightcol-leftcol+1)*(botrow-toprow+1);    
        
    }
};