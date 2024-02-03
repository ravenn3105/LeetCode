class Solution {
public:
    int funct(int index, vector<int> &arr, int k, vector<int>& dp){
        int n= arr.size();
        int len=0;
        int maxNum=0;
        int maxSum=0;
        if (index==n){
            return 0;
        }
        if(dp[index]!= -1){
            return dp[index];
        }
        for (int i=index; i< min(index+k, n); i++){
            len++;
            maxNum= max(maxNum, arr[i]);
            int sum= maxNum*len + funct(i+1, arr,k, dp);
            maxSum= max(maxSum, sum);
            
        }return dp[index]=maxSum;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n= arr.size();
        vector<int> dp(n,-1);
        return funct(0, arr, k, dp);
        return 0;
    }
};