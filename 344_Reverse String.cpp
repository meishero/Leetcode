// https://leetcode.com/problems/reverse-string/description/
// 简单 逆置字符串 让我想起了同花顺面试  当时那个面试官居然就问我这么简单的问题 哈哈哈 就第二个解法 ^就是我当时写的  
// 还有一个骚的 string a(s.rbegin(),s.rend());

class Solution {
public:
    string reverseString(string s) {
        reverse(s.begin(),s.end());
        return s;
    }
};

//class Solution {
// public:
    // string reverseString(string s) {
		// int len = (s.length());
        // for(int i=0; i < len/2; ++i)
		// {
			// s[i] ^= s[len-i];
			// s[len-i] ^= s[i];
			// s[i]  ^= s[len-i];
		// }
        // return s;
    // }
// };