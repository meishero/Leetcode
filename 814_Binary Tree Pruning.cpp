//814. Binary Tree Pruning

//https://leetcode.com/problems/binary-tree-pruning/description/

//没什么特别的，题目说的很清楚了，删掉节点就可以了，这里用的是引用多加了个递归函数，root同时是上次的parent的left or right。看discuss，有直接拿pruneTree当递归写的
//递归中return NULL  然后root->left = pruneTree()....  也可以

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
    typedef TreeNode Node;
    TreeNode* pruneTree(TreeNode* root) {
        _delNode(root);
        return root;
    }
    void _delNode(Node*& root)
    {
        if(!root)
            return;
        if (root->left !=NULL)
            _delNode(root->left);
        if (root->right !=NULL)
            _delNode(root->right);
        if(!root->left && !root->right && root->val == 0)
            root = NULL;           
    }
    
};