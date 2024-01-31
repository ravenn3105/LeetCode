class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperature) {
        int n=temperature.size();
        vector<int> result(n,0);
        int current=0;
        for(int i=n-1;i>=0;i--){
            if(temperature[i]>=current)
            current=temperature[i];
            else{
                int j=i+1;
                while(j<n&&temperature[i]>=temperature[j]){
                     if (result[j]==0) {
                        break;
                    }
                    j+=result[j];
                }
              result[i]=(j<n)?j-i:0;
            }
        }
        return result;
    }
};