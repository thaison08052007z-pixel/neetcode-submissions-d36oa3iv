class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt =  0;
        bool check = false;
        int x = s.size() - 1;   
        while(s[x] == ' ') x--; 
        for(int i = x; i >= 0 ; i--){
            if(s[i] == ' ' )break;
            cnt ++;
        }
        return cnt;
    }
};