class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end());
        int count=0;
        long long sum=0;
        int n=happiness.size()-1;
        while(n>=0 and k>0){
            sum+= max(0, happiness[n]-count++);
            k--; n--;
        }
        return sum;
    }
};