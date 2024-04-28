class Solution {
public:
vector<int> ans, count, subTree;
vector<unordered_set<int>> graph;
int N;
void dfs( int node, int parent){
    for(int c: graph[node]){
        if (c!= parent){
            dfs(c,node);
            count[node]+= count[c];
            subTree[node]+= subTree[c] +count[c];
        }
    }
    count[node]++;
}
void dfs2(int node, int parent){
    for (auto c:graph[node]){
        
        if(c!=parent){
            ans[c]=ans[node]-count[c]+N- count[c];
            dfs2(c,node);
        }
    }
}
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        N = n;
        graph.resize(N);
        ans.resize(N);
        count.resize(N);
        subTree.resize(N);
        for (int i=0; i<n; ++i){
            graph[i]= unordered_set<int>();
        }
        for (auto edge:edges){
            graph[edge[0]].insert(edge[1]);
            graph[edge[1]].insert(edge[0]);
        }
        dfs(0,-1);
        ans[0]= subTree[0];
        dfs2(0,-1);
        return ans;
    }
};