#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximizeSum(vector<int> &nums, int k)
    {
        int sum = 0;
        while (k--)
        {
            sort(nums.begin(), nums.end(), greater<int>());
            sum += nums[0];
            nums[0]++;
        }
        return sum;
    }
};