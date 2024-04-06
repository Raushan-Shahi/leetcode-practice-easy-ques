#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
       unordered_map<int,int> mp;
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
           mp[nums[i]]++;
       } 
       int left=0,pairs=0;
       for(auto x:mp){
           if((x.second)%2==0){
               pairs+=x.second/2;
           }else{
               if(x.second>1){
                   left+=x.second%2;
                   pairs+=x.second/2;
               }
               else{
                   left++;
               }
           }
       }
       ans.push_back(pairs);
       ans.push_back(left);
       return ans;
    }
};