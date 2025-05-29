class Solution {
public:
    int climbStairs(int n) {
        vector<int> v(n+1);
        v[n]=1;
        v[n-1]=1;
        for (int i=n-2; i>=0; i--){
            v[i]= v[i+1]+ v[i+2];
        }
        return v[0];
    }
};
