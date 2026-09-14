class Solution {
public:
    int arraySign(vector<int>& nums) {
        int l = nums.size();
        int p=0,n = 0;
        for (int i = 0; i < l; i++) {
        if (nums[i] > 0)
            p++;
        else if (nums[i]< 0)
            n++;
        else
            return 0;
        }
        if(n%2==0)return 1;
        else return -1;
    }
};