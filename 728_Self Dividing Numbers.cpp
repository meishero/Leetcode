//https://leetcode.com/problems/self-dividing-numbers/description/

//就是给一个区间判断一个数是不是能被它每位的数字整除
//目前是报错的  1-22 我的结果还是1-22，没有编译器  回去再查查

//昨天学到的技巧今天刚好能用上 unique去重  其实感觉这个题也可以用那种atoi取每位的数字 在转换 感觉有点蠢的

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ret;
        
        for(int i =left;i<=right;i++)
        {
            int num =i;
            while(num>0)
            {
                if( num%10 == 0 || i%(num%10) !=0 )  //把坏数据存储
                {
                    ret.push_back(i);
                    break;
                }
                num = num/10;       
            }
            ret.push_back(i);  //顺便每个数都push进去 也正好是顺序的  后面去重就是好数据了
        }
        
        ret.erase(unique(ret.begin(),ret.end()),ret.end());
        return ret;
    
    }
};