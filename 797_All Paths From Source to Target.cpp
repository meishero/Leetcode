//797. All Paths From Source to Target

//https://leetcode.com/problems/all-paths-from-source-to-target/description/


//最简单的dfs问题，我花了不少时间  果然还是太菜，尝试自己去写，写的挺复杂 中间碰到一点问题 完全没有头绪 还是决定去看了discuss
//理解了这种简单的DFS，用stack写，当时自己也尝试写，太麻烦了
class Solution {
public:
/*    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
		vector<vector<int>> ret;
		vector<int> path;
		stack<int> s;
		//初始条件
        for(auto x:graph[0])
		{
			path.push_back(0);         
			if (_trytogo(x,path,graph))
				ret.push_back(path);
			path.clear();
		}
        return ret;
    }
	bool _trytogo(int x, vector<int>& path ,vector<vector<int>>& graph)
	{
		vector<int> node = graph[x];
		if(node.size()>0 && x != graph.size()-1)
		{
			for(auto next:node)
			{
				path.push_back(x);
				return _trytogo(next,path,graph);   //这里出问题了，Input:
// [[4,3,1],[3,2,4],[3],[4],[]]
// Output:
// [[0,4],[0,3,4],[0,1,3,4]]
// Expected:
// [[0,4],[0,3,4],[0,1,3,4],[0,1,2,3,4],[0,1,4]]   发现自己菜的抠脚 对于1-3这种直接返回就算成功了，不会去遍历 1-2这种情况，想了半天决定还是看看discuss
			}
				
		}
		
		//下面两个就是退出条件
		if(x == graph.size()-1)
		{
			path.push_back(x);
			return true;
		}
		else   //这个节点vector为空的时候 
		{
			path.erase(path.end()-1);
			return false;
		}
	}
	
	void dfs(vector<vector<int>>& graph, vector<vector<int>>& result, vector<int> path, int src, int dst) {
		path.push_back(src);
		if(src == dst) {
			result.push_back(path);
			return;
		}

		for(auto node : graph[src])
			dfs(graph, result, path, node, dst);
	}
	vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
		vector<vector<int>> paths; vector<int> path;
		int nodes = graph.size();
		if(nodes == 0) return paths;
		dfs(graph, paths, path, 0, nodes - 1);
		return paths;
}
	
};

*/

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
		vector<vector<int>> ret;
		vector<int> path;
		dfs(ret,path,0,graph.size()-1,graph);
		return ret;
	}
	
	void dfs(vector<vector<int>>& ret,vector<int> path,int src, int dst,vector<vector<int>>& graph)
	{
		path.push_back(src);
		if(src == dst)
		{
			ret.push_back(path);
			return;
		}
		for(auto x:graph[src])
			dfs(ret,path,x,dst,graph);
		
	}
};