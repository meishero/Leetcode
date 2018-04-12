// https://leetcode.com/problems/custom-sort-string/description/

// 注释的是第一种方法，最开始的想法，先统计T出现的次数，for循环S 然后拼接
// 看了下 discuss 有人用这种sort传比较函数的用法 自己简单的试了下 没通  回去再调吧
// 貌似没有 char = string[2] 这么一说

class Solution {
public:
    string customSortString(string S, string T) {
		// char apper_num[26];
		// for(auto x:T)
			// apper_num[x-'a']++;
		// string after;
		// for(auto x:S)
		// {
			// for() //这里重复+=
			// after +=
		// }
		memset(rule,'0',26);
		for(int i =0; i < S.length(); ++i)
			rule[S[i] -'a'] = i;
		sort(T.begin(),T.end(),_less_compare);    
    }
	bool _less_compare(char a, char b)
	{
		return rule[a - 'a'] < rule[b -'a'];
	}
	char rule[26];
};