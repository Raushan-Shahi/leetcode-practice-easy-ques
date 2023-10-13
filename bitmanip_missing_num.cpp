#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum, s = 0;
        int n = nums.size();
        sum = (n * (n + 1)) / 2;
        for (int i = 0; i < n; i++)
        {
            s += nums[i];
        }
        return sum - s;
    }
};