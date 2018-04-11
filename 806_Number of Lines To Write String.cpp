//https://leetcode.com/problems/number-of-lines-to-write-string/description/

//这个题有点意思  刚开始看不懂，翻译之后也不太明白，去百度查了下题目，才明白这个题是要求干什么
//刚开始以为是弱智题，接口测试用例直接不通过，才发现题目第二个例子是说这个字符长度不能分开，所以把代码重新改了下 AC

// class Solution {
// public:
    // vector<int> numberOfLines(vector<int>& widths, string S) {
        // int sum=0;
        // for(auto x:S)
        // {
            // sum += widths[x-'a'];
        // }
        // vector<int> ret;
        // ret.push_back(sum/100+1);
        // ret.push_back(sum%100);
        // return ret;
    // }
// };



class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int sum=0;
        for(auto x:S)
        {
            int after = (sum + widths[x -'a']);    //假设加上这个数
            if(sum/100  < after/100  && after%100 !=0)     //如果加上这个数不能被100整除，并且跨过100  就补齐100
                sum += (sum/100+1)*100-sum;
            sum+=widths[x -'a'];
        }
        vector<int> ret;
        ret.push_back(sum/100+1);
        ret.push_back(sum%100);
        return ret;
    }
};