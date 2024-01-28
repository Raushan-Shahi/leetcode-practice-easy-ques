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


class Solution
{
public:
    void merge(TreeNode *curr1, TreeNode *curr2, TreeNode *prev1, char d)
    {
        //         Base Case
        if (!curr1 && !curr2)
            return;
        else if (curr1 && curr2)
            curr1->val += curr2->val;
        else if (curr2)
        {
            if (d == 'l')
                prev1->left = curr2;
            else
                prev1->right = curr2;
            return;
        }
        else
            return;
        merge(curr1->left, curr2->left, curr1, 'l');
        merge(curr1->right, curr2->right, curr1, 'r');
    }

    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
    {
        if (!root1)
            return root2;
        else if (!root2)
            return root1;
        merge(root1, root2, NULL, '0');
        return root1;
    }
};


int main()
{

    return 0;
}