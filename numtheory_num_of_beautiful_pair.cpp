#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstdigit(int a)
    {
        while (a > 9)
            a = a / 10;
        return a;
    }

    int lastdigit(int a)
    {
        return a % 10;
    }

    int countBeautifulPairs(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int x = firstdigit(nums[i]);
                int y = lastdigit(nums[j]);
                if (__gcd(x, y) == 1)
                    count++;
            }
        }
        return count;
    }
};