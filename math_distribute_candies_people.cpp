#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> distributeCandies(int candies, int num_people)
    {
        queue<int> q;
        vector<int> v(num_people, 0);
        for (int i = 0; i < num_people; i++)
            q.push(i);
        int x = 1;
        while (candies>0)
        {
            if (candies >= x)
            {
                v[q.front()] += x;
                candies -=x;
                x++;
                int temp = q.front();
                q.push(temp);
                q.pop();
            }
            else{
                v[q.front()] +=candies;
                candies =0;
            }
        }
        return v;
    }
};