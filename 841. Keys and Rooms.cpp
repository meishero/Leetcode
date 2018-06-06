// 841. Keys and Rooms

// https://leetcode.com/problems/keys-and-rooms/description/

// 似乎DFS BFS 都可以做 
// 这里用的DFS 不过报错了  

class Solution {
public:
	void _check(vector<vector<int>>& rooms, int pos, unordered_set<int>& status)
	{
		for (auto key : rooms[pos])
		{
				if (status.find(key) == status.end())
				{
					status.insert(key);
					_check(rooms, key, status);

				}
			return;
		}
	}

	bool canVisitAllRooms(vector<vector<int>>& rooms) {
		unordered_set<int> status;
		_check(rooms, 0, status);
		if (status.size() == rooms.size())
			return true;
		return false;


	}
};