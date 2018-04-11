//https://leetcode.com/problems/array-partition-i/description/
//描述不清的弱智题  不想说话 看右上角都是踩 呵呵


class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ret=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2)
        {
            ret+=nums[i];
        }
        return ret;
    }
};