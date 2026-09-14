class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int r=0;
        for(int i=0;i<n;i++){
            if(s[i]=='I') {
                if(s[i+1]=='V'){
                    i++;
                    r+=4;}
                else if(s[i+1]=='X'){
                    i++;
                    r+=9;}
                else r+=1;}
            else if(s[i]=='V') r+=5;
            else if(s[i]=='X') {
                if(s[i+1]=='L') {
                    i++;
                    r+=40;}
                else if(s[i+1]=='C') {
                    i++;
                    r+=90;}
                else r+=10;}
            else if(s[i]=='L') r+=50;
            else if(s[i]=='C'){
                if(s[i+1]=='D') {
                    i++;
                    r+=400;}
                else if(s[i+1]=='M') {
                    i++;
                    r+=900;}
                else r+=100;}
            else if(s[i]=='D') r+=500;
            else if(s[i]=='M') r+=1000;
        }
        return r;
    }
};