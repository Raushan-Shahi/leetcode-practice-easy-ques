#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans=0;
        sort(cost.begin(), cost.end(), greater<int>());
        
        for (int i = 0; i < cost.size(); i++)
        {
            if(i%3 != 2 ){
                ans+= cost[i];
            }
        }
        return ans;
    }
};