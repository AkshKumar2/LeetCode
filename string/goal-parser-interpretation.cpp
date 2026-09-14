class Solution {
public:
    string interpret(string s) {
        string r;
        for(int i=0;i<s.size();i++){
            if(s[i]=='G')r+='G';
            else if(s[i]=='(' ){
                if(s[i+1]==')')r+='o';
                else if(s[i+1]=='a'){
                    if(s[i+2]=='l'){
                        if(s[i+3]==')')r+="al";
                    }
                }
            }
        }return r;
    }
};