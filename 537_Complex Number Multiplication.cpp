//https://leetcode.com/problems/complex-number-multiplication/description/

//新技能get stringstrem 转换 数字和字符串  
//个人思路比较弱智  先find找到+的下标 分割两个string 再去处理  比较麻烦
//肯定是弱智解法 不愿浪费时间去写  直接看了下discuss  这个转换方法以前也搜过  sprintf是数字转字符串比较好用



class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        stringstream ssa,ssb,ret;
        ssa<<a;
        ssb<<b;
        int num1,num2,num3,num4;
        char ch;
        ssa>>num1>>ch>>num2;
        ssb>>num3>>ch>>num4;
        
        ret<<num1*num3 - num2*num4<<"+"<<num1*num4+num2*num3<<"i";
        return ret.str();
    }
};