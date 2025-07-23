class Solution {
public:
    string removesub(string &s,string &sub){
        int i=0;
        for(int j=0;j<s.length();j++){
            s[i]=s[j];
            i++;
            if(i>=2 && s[i-2]==sub[0] && s[i-1]==sub[1]){
                i-=2;
            }
        }
        s.erase(begin(s)+i,end(s));

        return s;
        }

    int maximumGain(string s, int x, int y) {
        int n=s.length();
        int score=0;

        string maxstr=(x>y) ?"ab":"ba";
        string minstr = (maxstr == "ab") ? "ba" : "ab";

        string temp1=removesub(s,maxstr);
        int l=temp1.length();
        score+=max(x,y)*((n-l)/2);

        string temp2=removesub(temp1,minstr);
        int l1=temp2.length();
        score+=min(x,y)*((l-l1)/2);


        return score;


    }
};