class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> minHeap;
    for (int i=0; i<nums1.size(); i++){
        minHeap.push({nums1[i]+ nums2[0], {i,0}});
    }
        vector<vector<int>> ans;
        while(k--){
            pair<int, pair<int,int>> tp=minHeap.top();
            int x= tp.second.first, y= tp.second.second;
            ans.push_back({nums1[x], nums2[y]});
            // ans.push_back({minHeap.top().first, minHeap.top().second});
            minHeap.pop();
            if (y!= nums2.size()-1){
                minHeap.push({nums1[x]+nums2[y+1], {x,y+1}});
            }

        }
        return ans;

 
    }
};