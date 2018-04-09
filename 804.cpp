//804. Unique Morse Code Words

//https://leetcode.com/problems/unique-morse-code-words/description/

//��Ŀ���������ҳ��м��ֲ�һ���Ĵ��� �����е����⣬forѭ���������ʱ����������ѭ�������û��������������ʱû�б����� ��֤���� 
//������н�� �տ�ʼ���뷨Ҳ������forѭ�� �����õ�vectorβ�壬׼������forѭ�����ء�ֻ���뷨�����ǲ��֮�� �����STL�Ļ�  ����������������
//srot(after.begin(),after.end());����
//after.erase(unique(after.begin(),after.end()),after.end());
//uniqueֻ�ǰ��ظ���Ԫ�طŵ������ĺ��棨�����ĳ���û�䣬ֻ��Ԫ��˳��ı��ˣ�����������᷵��һ����������ָ����Щ�ظ�Ԫ�صĿ�ʼ���֡����Ҫ������ɾ����ЩԪ�أ�����Ҫ����erase����һ�¡�
//vecSrc.erase( unique( vecSrc.begin(), vecSrc.end() ), vecSrc.end() );////ע�⣺�˴���δʹ��ѭ����ֻһ�仰��ɾ������������������Ԫ�����ظ���Ԫ�ء�
//����discussֱ���õ�set���о��ܻ��ǣ��Լ�����̫���ˡ���  
//���⣬�տ�ʼ�����ˣ���ΪҪ���м����ظ��� return���� words.size()-after.size();

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