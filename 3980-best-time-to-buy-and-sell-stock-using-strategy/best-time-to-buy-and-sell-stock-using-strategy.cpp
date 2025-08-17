class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n=prices.size();
        vector<long long> weighted(n+1,0), plain(n+1,0);
        long long ans=0;
        for (int i=0; i<n; i++){
            weighted[i+1]= weighted[i]+ (1LL*prices[i]*strategy[i]);
            plain[i+1]= plain[i]+prices[i];
        }
        ans= weighted[n];
        for  (int i=0; i<=n-k; i++){
            long long a= weighted[i]+ (weighted[n]- weighted[i+k]);
            long long b= plain[i+k]- plain[i+k/2];
            ans= max(ans, a+b);
        }
        return ans;
    }
};