class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> sum;
        int ret=0;
        for(auto x: S)
            sum[x]++;
        for(auto x: J)
            ret+=sum[x];
        return ret;
    }
};