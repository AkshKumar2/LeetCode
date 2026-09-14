class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int n;
        if(w1.size()>w2.size()){
            n=w1.size();
        }
        else n=w2.size();
        string r="";
        for(int i=0;i<n;i++){
            if(w1.size()<=i){
                r+=w2[i];
            }
            else if(w2.size()<=i){
                r+=w1[i];
            }
            else{
            r+=w1[i];
            r+=w2[i];
            }
        } return r;
    }
};