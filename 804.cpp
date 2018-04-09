//804. Unique Morse Code Words

//https://leetcode.com/problems/unique-morse-code-words/description/

//题目告诉我们找出有几种不一样的代码 另外有点问题，for循环里面的临时变量，后面循环是重置还是跳过，这个暂时没有编译器 验证不了 
//这个题有借鉴 刚开始的想法也是两个for循环 但是用的vector尾插，准备再用for循环查重。只是想法，但是查过之后 如果用STL的话  是如下这样操作的
//srot(after.begin(),after.end());排序
//after.erase(unique(after.begin(),after.end()),after.end());
//unique只是把重复的元素放到容器的后面（容器的长度没变，只是元素顺序改变了），而它本身会返回一个迭代器，指向这些重复元素的开始部分。因此要向真正删除这些元素，还是要调用erase处理一下。
//vecSrc.erase( unique( vecSrc.begin(), vecSrc.end() ), vecSrc.end() );////注意：此处并未使用循环，只一句话就删除了容器中所有相邻元素中重复的元素。
//看到discuss直接用的set，感觉很机智，自己还是太笨了。。  
//另外，刚开始理解错了，以为要查有几个重复的 return的是 words.size()-after.size();

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        char* dict[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> after;
        for(auto value : words)
        {
            string tmp ="";
            for(char c: value)
            {
                tmp += dict[c-'a'];
            }
            after.insert(tmp);
            tmp="";
        }
        return after.size();
    }
};