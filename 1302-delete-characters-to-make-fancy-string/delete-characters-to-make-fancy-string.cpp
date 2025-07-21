class Solution {
public:
    string makeFancyString(string s) {
        string o="";
        int freq=1;
        o.push_back(s[0]);
        for(int i=1;i<s.length();i++){
           if(s[i]==o.back()){
            freq++;
           
           if(freq<3) o.push_back(s[i]);}
           else {o.push_back(s[i]);
            freq=1;}
        }
        return o;
    }
};