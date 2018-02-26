bool less_pair(pair<int,int> a,pair<int,int> b)
{
    return a.first<b.first;
}
class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        vector<pair<int,int>> index;
        for(int i=0;i<nums.size();i++)
        {
            index.push_back(make_pair(nums[i],i));
        }
        sort(index.begin(),index.end(),less_pair);
        for(int j=0,k=index.size()-1;j!=k;)
        {
            
            if(index[j].first+index[k].first == target)
            {
                ret.push_back(index[j].second);
                ret.push_back(index[k].second);
                break;
            }
            if (index[j].first+index[k].first > target)
                k--;
            else
                j++;

        }
        return ret;   
    }
};