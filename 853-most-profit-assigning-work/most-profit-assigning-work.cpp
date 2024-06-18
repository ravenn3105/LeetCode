class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {

        int ans=0,d= difficulty.size(), w= worker.size();
        sort(worker.begin(), worker.end());
        vector<pair<int,int>> v;
        for (int i=0; i<d; i++){
            v.push_back({difficulty[i], profit[i]});
        }
        sort(v.begin(), v.end());
        int i=0, j=0, m=0;
        while (j<w){
            while(i<d && worker[j]>=v[i].first){
                m= max(m, v[i].second);
                i++;
            }
            ans+=m;
            j++;
        }
        return ans;
    }
};