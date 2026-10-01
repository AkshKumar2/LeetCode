class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=prices[0];
        int maxi=0;
        for(int i=1;i<n;i++){
            mini=min(prices[i],mini);
            int pro=prices[i]-mini;
            maxi=max(pro,maxi);
        }return maxi;
    }
};