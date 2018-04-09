//807. Max Increase to Keep City Skyline

//https://leetcode.com/problems/max-increase-to-keep-city-skyline/description/

//题目已经告诉我们这是一个正方形，传入的是Vector<vector<int>> 观察，每个坐标点要满足高同时最多不能超过横向和纵向的最高处，所以首先得出所有行所有列的最高点，再写个for循环计算与这两个最高点的最小值的差值，去累加即可。
//问题是刚开始不知道怎么去取每横向的最大值，因为是vector<vector>，所以每个vector的最大值是用max即可，但横向就不好算了，最后想到forfor循环，完整遍历才可以。


class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> rowmax(grid.size(),0);
        vector<int> colmax(grid.size(),0);
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j =0;j<grid.size();j++)
            {
                rowmax[i] = max(rowmax[i],grid[i][j]);
                colmax[j] = max(colmax[j],grid[i][j]);
            }
        }
        int ret = 0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j =0;j<grid.size();j++)
            {
                ret += min(rowmax[i],colmax[j]) - grid[i][j];
            }
        }
        return ret;
    }
};