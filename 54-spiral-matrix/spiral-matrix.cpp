class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int  m=matrix.size();
        int n=matrix[0].size();
        int top=0;
        int bottom=m-1;
        int left=0;
        int right=n-1;
        int face=0;

        while(result.size() < m*n){
            if(face==0){
                for(int i=left;i<=right;i++){
                    result.push_back(matrix[top][i]);
                }
                top++;
            }
            if(face==1){
                for(int i=top;i<=bottom;i++){
                    result.push_back(matrix[i][right]);

                }
                right--;
            }
            if(face==2){
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(face==3){
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
           
            face++;
             if(face==4){
                face=0;}


        }
        return result;
        
    }
};