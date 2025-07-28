class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int res=-1;
        int low=0;
        int high=letters.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target<letters[mid]){
                res=mid;
                high=mid-1;

            }
            
            else{
                low=mid+1;
            }
        }
        if(res==-1) return letters[0];

        return letters[res];
        
    }
};