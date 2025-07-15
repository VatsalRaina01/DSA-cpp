class Solution {
public:
    bool isValid(string word) {
            if(word.length()<3)return false;
            bool v=false;
            bool c=false;
            for(auto w:word){
                w=tolower(w);
                if(isalpha(w)){
                    if(w=='a'|| w=='e'||w=='i'||w=='o'||w=='u'){
                        v=true;
                    }
                    else c=true;
                }
                else if(!isdigit(w)){
                    return false;
                }
            }
            return c && v;
        
    }
};