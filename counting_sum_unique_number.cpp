#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int prev = nums[0], ans = nums[0], flag =1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == prev && flag ==1)
            {
                ans -= prev;
                prev = nums[i];
                flag =0;
            }
            else if(nums[i] != prev)
            {
                ans += nums[i];
                prev = nums[i];
                flag = 1;
            }
        }
        return ans;
    }
};