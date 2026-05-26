class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> s(word.begin(),word.end());
            int cnt=0;
            for(auto c:s){
                if(s.count(c)&&s.count(c-'a'+'A')){
                    cnt++;
                }
            }
        
        return cnt;
    }
};