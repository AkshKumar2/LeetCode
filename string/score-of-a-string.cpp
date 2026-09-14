class Solution {
public:
    int scoreOfString(string s) {
        int t=0;
        for(int i=0;i<s.size()-1;i++){
              t=abs(s[i]-s[i+1])+t;
        } return t;
    }
};