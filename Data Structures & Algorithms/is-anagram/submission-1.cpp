class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int fre[256] = {0}; 
        for(int i = 0; i < s.size(); i ++){
            fre[s[i]] ++;
            fre[t[i]] --; 
        }
    
        for(int i = 0 ; i < 256; i++){
            if(fre[i] != 0) return false;
        }
        return true; 
    }
};
