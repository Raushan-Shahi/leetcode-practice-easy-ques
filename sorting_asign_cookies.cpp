#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int i = 0, j = 0, count = 0;
        int n = g.size(), m = s.size();
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());

        while (i< n && j < m)
        {
            if(s[j] >= g[i])
            {
                count++;
                i++;
                j++;
            }
            else if(s[j]< g[i])
            {
                j++;
            }
        }
        return count;
    }
};