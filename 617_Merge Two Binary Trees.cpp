//https://leetcode.com/problems/merge-two-binary-trees/description/


//发现自己脑子抽着，很简单的一个题，硬是给我搞复杂了，后面的是自己抽抽的过程，中间还有bug。
//做题总想着要给一个初始化条件再进入递归，结果发现很多情况下 直接递归就行了，不用搞那么麻烦。

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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
       node* root = handle(t1,t2);
       return root;
    }
	node* handle(node* t1,node* t2)
	{
		if(!t1) return t2;
		if(!t2) return t1;
		node* root = new node(t2->val+t1->val);
		root->left = handle(t1->left, t2->left);
		root->right = handle(t1->right, t2->right);
		return root;
	}
};


// class Solution {
// public:
    // typedef TreeNode node;
    // TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        // if (!t1) return t2;
        // if (!t2) return t1;
        // node* newnode = new node(t1->val+t2->val);
        // _Prehandle(t1,t2,newnode);
        // return newnode;
    // }
    // void _Prehandle(node* t1, node* t2, node* newnode)
    // {
        // if(!t1->left)
        // {
            // newnode->left = t2->left;
            // return;
        // }
        // if(!t2->left)
        // {
            // newnode->left = t1->left;
            // return;
        // }
        // if(!t1->right)
        // {
            // newnode->left = t2->right;
            // return;
        // }
        // if(!t2->right)
        // {
            // newnode->right = t1->right;
            // return;
        // }
        // newnode->left = new node(t1->left->val+t2->left->val);
        // _Prehandle(t1->left,t2->left,newnode->left);
        

        // newnode->right = new node(t1->right->val+t2->right->val);
        // _Prehandle(t1->right,t2->right,newnode->right);
    // }
// };