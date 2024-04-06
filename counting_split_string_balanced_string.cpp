#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    

class Solution {
public:
    int balancedStringSplit(string s) {
        int l_count =0, r_count =0, ans =0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'L')
                l_count++;
            else
                r_count++;
            
            if(l_count == r_count){
                ans++;
            }
        }
        return ans;
    }
};