class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int f = 0;
        int l = n - 1;
        while (f <= l) {
            int mid = (f + l) / 2;
            if (nums[mid] > target) {
                l = mid - 1;
            } else if (nums[mid] < target) {
                f = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};