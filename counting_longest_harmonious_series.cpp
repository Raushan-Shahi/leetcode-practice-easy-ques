#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) { 
        int l = 0, r = 0, ans = 0;
        sort(nums.begin(),nums.end());
        while(r < nums.size()){
            if(nums[r] - nums[l] == 1) ans = max(ans, r-l+1); 
            else if(nums[r] - nums[l] > 1){
                while(nums[r] - nums[l] > 1)l++;
            }
            r++;
        }
        return ans;
    }
};