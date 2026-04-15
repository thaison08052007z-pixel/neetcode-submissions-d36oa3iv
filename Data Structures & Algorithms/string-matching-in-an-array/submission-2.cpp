class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), [&](string a, string b) {
            return a.length() < b.length();
        });
        set<string> ans;
        for(int i = 0;i < words.size() - 1; i++){
            for(int j = i + 1; j < words.size(); j++){
                if(words[j].find(words[i]) != string::npos) ans.insert(words[i]);
            }
        }
        vector<string> res;
        for(string x : ans) res.push_back(x); 
        return res; 
    }
};