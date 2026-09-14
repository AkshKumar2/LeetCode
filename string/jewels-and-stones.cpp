class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int c=0;
        for(int i=0;i<j.size();i++){
            for(int a=0;a<s.size();a++){
                if(j[i]==s[a])c++;
            }
        }return c;
    }
};