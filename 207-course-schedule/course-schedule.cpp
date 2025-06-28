class Solution {
    unordered_map<int, vector<int>> preMap;
    set<int> visited;
public:
bool dfs(int cor){
    if (visited.count(cor)){return false;}

    if (preMap[cor].empty()){return true;}

    visited.insert(cor);
    for (auto i:preMap[cor]){
        if (!dfs(i)){return false;}

    }
    visited.erase(cor);
    preMap[cor].clear();
    return true;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        for (int i=0; i<numCourses; i++){
            preMap[i]={};
        }
        for (auto i:prerequisites){
            preMap[i[0]].push_back(i[1]);
        }

        for (int i=0; i<numCourses; i++){
            if(!dfs(i)){
                return false;
            }
        }
        return true;
    }
};
