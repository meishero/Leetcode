//807. Max Increase to Keep City Skyline

//https://leetcode.com/problems/max-increase-to-keep-city-skyline/description/

//��Ŀ�Ѿ�������������һ�������Σ��������Vector<vector<int>> �۲죬ÿ�������Ҫ�����ͬʱ��಻�ܳ���������������ߴ����������ȵó������������е���ߵ㣬��д��forѭ����������������ߵ����Сֵ�Ĳ�ֵ��ȥ�ۼӼ��ɡ�
//�����Ǹտ�ʼ��֪����ôȥȡÿ��������ֵ����Ϊ��vector<vector>������ÿ��vector�����ֵ����max���ɣ�������Ͳ������ˣ�����뵽forforѭ�������������ſ��ԡ�


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