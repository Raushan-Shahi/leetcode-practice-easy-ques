#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int target) 
    {
        int minlen = INT_MAX;
        //brute forece
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i ; j < nums.size() ; j++){
                 //checking of the subarrays
                 if(fun(nums,i,j,target) >= target) 
                 minlen = min(minlen , j-i+1);
            }
        }
        if(minlen == INT_MAX) return -1;
        return minlen;
    }
    int fun(vector<int>&nums,int i,int j,int &target){
        int orsum = 0;
        for(int k = i ; k <= j ; k++){
            orsum = orsum | nums[k];
        }  
        return orsum;
    }
};

int main()
{

    return 0;
}