#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findGCD(vector<int> &nums){
        int maxi =0, mini =INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            maxi = max(maxi, nums[i]);
            mini = min(mini, nums[i]);
        }
        return __gcd(maxi, mini);
    }
};