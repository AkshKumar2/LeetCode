class Solution {
public:
    int len(int n) {
        int c = 0;

        while(n != 0) {
            int r = n % 10;
            n /= 10;
            c++;
        }

        return c;
    }

    int countCommas(int n) {
        int c = 0;
        int s = len(n);

        if(s > 3)
            c = n - 999;

        return c;
    }
};