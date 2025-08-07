class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> result;
        int m=mat.size();
        int n=mat[0].size();
        map <int,vector<int>> mp;

        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                mp[i+j].push_back(mat[i][j]);

        bool flag=true;
        for(auto &it:mp){
            if(flag){
                reverse(it.second.begin(),it.second.end());
            }
            flag=!flag;
            
        }     
        for(auto &it:mp){
            for(auto &ele:it.second){
                result.push_back(ele);

            }
        }   

        return result;
        
    }
};