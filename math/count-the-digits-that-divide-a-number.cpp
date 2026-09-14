class Solution {
public:
    int countDigits(int num) {
        int n=num,c=0,r;
        while(n!=0){
            r=n%10;
            if(num%r==0)c++;
            n=n/10;
        }return c;
    }
};