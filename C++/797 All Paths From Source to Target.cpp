class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> tmp;
        dfs(graph, ans, tmp, 0);
        return ans;
    }
    
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& paths, vector<int> path, int curr) {
        path.push_back(curr);
        if (curr == graph.size() - 1) paths.push_back(path);
        else for (int nei : graph[curr]) dfs(graph, paths, path, nei);
    }
};