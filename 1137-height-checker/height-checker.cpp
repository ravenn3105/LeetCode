class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        int ans=0;
        for (auto i: heights){
            expected.push_back(i);
        }
        sort(expected.begin(), expected.end());
        for (int i=0; i<heights.size(); i++){
            if (heights[i]!= expected[i]){
                ans++;
            }
        }
        return ans;
    }
};