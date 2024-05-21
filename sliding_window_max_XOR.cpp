#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumStrongPairXor(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (abs(nums[i]-nums[j]) <= min(nums[i], nums[j]))
                {
                    ans = max(ans, (nums[i] ^ nums[j]));
                }
            }
        }
        return ans;
    }
};