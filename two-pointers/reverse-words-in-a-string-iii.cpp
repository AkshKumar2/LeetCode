class Solution {
public:
    string reverseWords(string s) {
        int f=0;
        int e=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                e=i-1;
                while(f<e){
                    swap(s[f],s[e]);
                    f++;
                    e--;
                }f=i+1;
            }
        }
            e=s.size()-1;
            while(f<e){
                swap(s[f],s[e]);
                f++;
                e--;
            
        }return s;
    }
};