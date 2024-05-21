#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int>s;
        int n = nums.size(), i = 0, winSize = 0;
        for(int j=0; j<n; j++){
            if(s.find(nums[j]) != s.end()) return true;
            s.insert(nums[j]);
            winSize++;
            if(winSize < k+1) continue;
            s.erase(nums[i]);
            i++;
        }
        return false;
    }
};

int main()
{

    return 0;
}