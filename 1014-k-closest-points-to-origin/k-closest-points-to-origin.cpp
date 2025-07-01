class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       unordered_map<int, vector<vector<int>>> mp;
       priority_queue<int, vector<int>, greater<int>> minHeap;
       for (auto i:points){
        int dist= (i[0]*i[0])+ (i[1]*i[1]);
        minHeap.push(dist);
        mp[dist].push_back(i);
       } 
       
       while( k>1){
        minHeap.pop();
        k--;
        }
       int c= minHeap.top();
       vector<vector<int>> result;
        for (auto& [dist, pts] : mp) {
            if (dist<=c) {
                result.insert(result.end(), pts.begin(), pts.end());
            }
        }
       return result;
    }
};
