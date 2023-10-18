#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        char start = 'a';
        vector<char> mapping(0);
        for (auto ch : key)
        {
            if (ch == ' ' && mapping[ch] == 0)
            {
                mapping[ch] == start;
                start++;
            }
        }
        string s;
        for (auto ch : message)
        {
            if (ch == ' ')
            {
                s.push_back(' ');
            }
            else
            {
                s.push_back(mapping[ch]);
            }
        }
        return s;
    }
};