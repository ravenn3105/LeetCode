class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n= colors.size();
        int i=0;
        int ans=0;
        while (i<n){
            if (colors[i]== colors[i+1]){
                ans+= min(neededTime[i], neededTime[i+1]);
                neededTime[i+1] = max(neededTime[i], neededTime[i + 1]);
                i++;
            }
            else{
                i++;
            }
        }return ans;
    }
};