// https://leetcode.com/problems/keyboard-row/description/

// ��֪Ϊ��δAC  ��Ŀ�����Ǽ���ĸ����������������ĸ����һ�е�  û�õ�ʲô�ر�ķ���
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1 = "QWERTYUIOPqwertyuiop";
        string s2 = "ASDFGHJKLasdfghjkl";
        string s3 = "ZXCVBNMzxcvbnm";
        unordered_map<char,int> dict;
        vector<string> ret;
        for(auto x:s1)
            dict[x] = 1;
        for(auto x:s2)
            dict[x] = 2;
        for(auto x:s3)
            dict[x] = 3;
        for(auto x:words)
        {
            for(int i =0; i<x.size(); ++i)
            {
                if(dict[x[0]] != dict[x[i]]);
                    break;
                if(i == x.size()-1)
                    ret.push_back(x);
            }
        }
        return ret;
        
    }
};