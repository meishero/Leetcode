//https://leetcode.com/problems/partition-labels/description/


//这个题没有看懂题目的意思，后面百度了下

// 因为第一个区间的第一个值其实是固定的，那么其实就像一个子问题去传递 第一个区间可以计算出来，那么剩下的补集继续递归/循环
// 要做的是就是记录每一个字符最后一次出现的下标 然后像abcab这样，a-a是一个区间，但是要去遍历a-a之间有没有最后一个坐标>a的最后一个坐标，大于就替换 从下一个继续压缩补集这算是贪心吗？
// 这算是贪心吗？

//暂时未AC  回家调试看看


class Solution {
public:
    vector<int> partitionLabels(string S) {
        int lastindex[26] = {0};
		vector<int> ret;
		for(int i =0;i<S.length();i++)
		{
			lastindex[S[i] -'a'] = i;   //lastindex记录每一个出现的字符的最后一次出现下标
		}
		
		int begin = 0;    //初始值  
		int end = lastindex[S[0] -'a'];
		
		while(end <=S.length())
		{
			int newend = end;
			for(int i = begin;i<=end;i++)      //遍历这段区间，如果中间出现的字符最后一次位置还大于这个区段，那么区段需要扩充
			{
				if(lastindex[S[i] -'a']>end)
					newend = lastindex[S[i] -'a'];
			}
			ret.push_back(newend-begin+1);  //记录下标
            
            begin = newend+1;   //重新赋值 下一个区段
            if (begin>=S.length())   //这里发现一直AC不了  提示下面下标越界  想了下应该是最后一次循环 读取到脏数据了
                break;
			end = lastindex[S[begin]-'a'];   
		}
		return ret;
    }
};
