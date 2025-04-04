class Solution {
public:
    // Helper function for backtracking
    void bt(vector<int>& candidates, int target, vector<vector<int>>& res, int i, int sum, vector<int>& path) {
        // If the current sum matches the target, add the path to the result
        if (sum == target) {
            res.push_back(path);
            return;
        }

        // If index exceeds the array size or sum exceeds the target, return
        if (i >= candidates.size() || sum >= target) {
            return;
        }

        // Include the current element and move to the next index
        path.push_back(candidates[i]);
        bt(candidates, target, res, i + 1, sum + candidates[i], path);
        path.pop_back(); // Backtrack to explore other possibilities

        // Skip duplicate elements to avoid duplicate combinations
        while (i + 1 < candidates.size() && candidates[i] == candidates[i + 1]) {
            i++;
        }

        // Exclude the current element and move to the next distinct element
        bt(candidates, target, res, i + 1, sum, path);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // Sort the candidates to handle duplicates efficiently
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> res; // Stores the final result
        vector<int> path; // Stores the current combination

        // Start backtracking from index 0 with initial sum 0
        bt(candidates, target, res, 0, 0, path);

        return res;
    }
};
