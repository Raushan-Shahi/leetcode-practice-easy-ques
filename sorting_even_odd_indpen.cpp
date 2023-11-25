#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortEvenOdd(vector<int> &nums)
    {
        vector<int> v1, v2, ans;
        for (int i = 0; i < nums.size() / 2; i++)
        {
            v1.push_back(nums[2 * i]);
            v2.push_back(nums[2 * i + 1]);
        }
        if (nums.size() % 2 != 0)
        {
            v1.push_back(nums[nums.size() - 1]);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<int>());
        for (int i = 0; i < v2.size(); i++)
        {
            ans.push_back(v1[i]);
            ans.push_back(v2[i]);
        }
        if (v1.size() != v2.size())
            ans.push_back(v1[v1.size() - 1]);
        return ans;
    }
};