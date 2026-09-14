class Solution {
public:
    string truncateSentence(string s, int k) {
        string r="";
        int c=0;
        int i=0;
            while(i<s.size() && c<k){
                if(s[i]!=' '){
                    r+=s[i];
                }
                else 
                {
                c++;
                if(c==k)break;
                r+=s[i];}
                i++;
            }
        return r;
    }
};