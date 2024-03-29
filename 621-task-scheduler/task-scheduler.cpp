class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
       unordered_map<char, int> mp;
       int ans=0;
       for (auto i:tasks){
        mp[i]++;
       } 
       priority_queue <int> pq;
       for (auto i:mp){
        pq.push(i.second);
       }
        while (!pq.empty()){
            int t=0;
            vector<int> v;
            for (int i=0; i<n+1; i++){
                if(!pq.empty()){
                    v.push_back(pq.top()-1);
                    pq.pop();
                    t++;
                }
            }
            for(auto i:v){
                if(i){pq.push(i);}
            }
            ans+= pq.empty() ? t: n+1;
        }return ans;
    }
};