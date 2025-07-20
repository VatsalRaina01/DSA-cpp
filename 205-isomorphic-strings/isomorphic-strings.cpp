class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        int mp_f[128] = {0}, mp_r[128] = {0}, n = s.size();
        for (int i = 0; i < s.size(); ++i) {
            if (mp_f[s[i]] != mp_r[t[i]]) { return false; }
            mp_f[s[i]] = mp_r[t[i]] = i + 1;
        }
        return true;
        
    }
};