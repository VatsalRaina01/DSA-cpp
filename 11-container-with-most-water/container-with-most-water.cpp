class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        int maxarea=0;
        int area=0;
        while(start<end){
            area=min(height[start],height[end])*(end-start);
            if(height[start]<height[end]){
                start++;
                }
            else{
                end--;
            }
            maxarea=max(maxarea,area);    
            }
        return maxarea;
        
        
    }
};