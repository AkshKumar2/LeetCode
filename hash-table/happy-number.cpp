class Solution {
public:
    bool isHappy(int n) {
        set<int> l;
        int s=0;
        while(n!=1){
            if(l.count(n))return false;
            else l.insert(n);
            while(n!=0){
            s+=pow(n%10,2);
            n/=10;
            }
            n=s;
            s=0;
        }return true;
    }
};