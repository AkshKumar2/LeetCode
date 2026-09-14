class Solution {
public:
    bool isPalindrome(int x) {
    int y=x;
    long int rev=0;
    int rem;
    while (y>0){
    rem=y%10;
    rev=rev*10+rem;
    y=y/10;
    }
    // printf("%d",rev);
    if(rev==x) return true;
    else return false;
    }
};