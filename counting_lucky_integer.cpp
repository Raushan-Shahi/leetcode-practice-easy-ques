#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for (int i = 0; i < arr.size(); i++)
            mp[arr[i]]++;
        int ans=-1;
        for(auto it:mp){
            if(it.first == it.second){
                ans = max(ans, it.first);
            }
        }
        return ans;
    }
};