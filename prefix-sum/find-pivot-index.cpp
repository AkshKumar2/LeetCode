class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int r=n-1;
        int s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
        }
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<i;j++){
                c+=nums[j];
            }
            if(s-c-nums[i]==c) return i;
        }return -1;
    }
};