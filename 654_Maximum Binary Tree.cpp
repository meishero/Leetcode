//654. Maximum Binary Tree

//https://leetcode.com/problems/maximum-binary-tree/description/


//类似中序遍历的一个题，保证每个每次取区间最大值作为分割点 分成左右子树
//目前编译报错 暂时在公司装不了编译器调试不了。

//学会一个新技能  distance(nums.begin(),max_element(nums.begin(),nums.end()));  求最大最小数的下标
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    typedef TreeNode node;
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() ==0)
            return NULL;
        int index = distance(nums.begin(),max_element(nums.begin(),nums.end()));
        node* root = new node(nums[index]);
        root->left = _createtree(nums,0,index-1);
        root->right = _createtree(nums,index+1,nums.size()-1);
        return root;
    }
    
    node* _createtree(vector<int>& nums, int begin, int end)
    {
        if(begin == end)
            return(new node(nums[begin]));
        if(begin > end ) return NULL;
        int index = begin+distance(nums.begin(),max_element(nums.begin()+begin,nums.begin()+end));
        node* root = new node(nums[index]);
        root->left = _createtree(nums,begin,index-1);
        root->right = _createtree(nums,index+1,end);
        return NULL;
    }
};