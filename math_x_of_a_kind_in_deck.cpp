#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        if(deck.size()==0) return false;
        map<int,int> m;
        for(auto v:deck)
        {
            ++m[v];
        }
        int ret = INT_MAX;
        for(auto [k,v] : m)
        {
            ret = min(ret, v);
        }
        
        if(ret < 2) return false;
        
        vector<int> gcds;
        for(auto [k,v] : m)
        {
            int a = gcd(v, ret);
            if(a == 1)
                return false;
            else
            {
                for(int i=0; i<gcds.size(); ++i)
                {
                    if(gcd(a, gcds[i]) == 1)
                        return false;
                }
                gcds.push_back(a);
            }
        }
        return true;
    }
};