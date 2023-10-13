#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isprime(int a)
    {
        if (a < 2)
            return false;
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
                return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>> &nums)
    {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (isprime(nums[i][i]))
                ans = max(ans, nums[i][i]);
            if (isprime(nums[i][n - i - 1]))
                ans = max(ans, nums[i][n - i - 1]);
        }
        return ans;
    }
};