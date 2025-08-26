class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
        int area=dimensions[0][0] * dimensions[0][1];
        int dig=dimensions[0][0]*dimensions[0][0] + dimensions[0][1]*dimensions[0][1];
        for(int i=1;i<n;i++){
            int currarea=dimensions[i][0]*dimensions[i][1];
            int currdig=dimensions[i][0]*dimensions[i][0] +dimensions[i][1]*dimensions[i][1];
             if (currdig > dig || (currdig == dig && currarea > area)) {
                dig = currdig;
                area = currarea;
            }

            
        }
        return area;
    }
};