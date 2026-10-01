class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;

        while(i < s.size()) {
            int j = i + k - 1;

            if(j >= s.size()) {
                j = s.size() - 1;
            }

            int x = i;

            while(x < j) {
                swap(s[x], s[j]);
                x++;
                j--;
            }

            i += 2 * k;
        }

        return s;
    }
};