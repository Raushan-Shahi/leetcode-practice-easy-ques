#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int arrangeCoins(int n)
    {
        int ans = 0;
        int i = 1;
        while (i <= n)
        {

            n -= i;
            ans++;
            i++;
        }
        return ans;
    }
};
