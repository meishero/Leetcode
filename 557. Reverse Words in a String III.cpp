// 557. Reverse Words in a String III


// https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

//巧妙利用到stringstream 解决逆置


class Solution {
public:
    string reverseWords(string s) {
	stringstream ss;
	ss << s;
	string word, ret;
	while (ss >> word)
	{
		reverse(word.begin(), word.end());
		ret += word + ' ';
	}
    ret = ret.substr(0,ret.length()-1);
	return ret;
    }
};