class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string comstr=strs[0];
        
        for(auto &cha:strs){
            int i=0;
            for(i=0;i<cha.length();i++){
                if(cha[i]!=comstr[i])
                    break;    

            }
            comstr=comstr.substr(0,i);

        }
        return comstr;


    }
};