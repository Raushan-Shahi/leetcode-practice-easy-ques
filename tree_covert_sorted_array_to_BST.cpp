#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


//use binary search simply, and the middle most element will be the node of the BST 
class Solution
{
public:
    TreeNode *BSTnode(vector<int> &num, int l, int r)
    {
        int m = (l + r) / 2;
        TreeNode* root = new TreeNode(num[m]);
        if (m == l)
            root->left = NULL;
        else
            root->left = BSTnode(num, l, m - 1);
        if (m == r)
            root->right = NULL;
        else
            root->right = BSTnode(num, m + 1, r);
        return root;
    }

    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int n = nums.size();
        return BSTnode(nums, 0, n-1);
    }
};

int main()
{

    return 0;
}