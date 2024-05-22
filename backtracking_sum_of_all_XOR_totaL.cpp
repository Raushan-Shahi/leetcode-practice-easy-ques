#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:

    void cal_XOR_sum(vector<int> &temp, int &sum){
        if(temp.empty()){
            return;
        }
        int xor_sum = temp[0];
        for (int i = 1; i < temp.size(); i++)
        {
            xor_sum = temp[i] ^ xor_sum; 
        }
        sum += xor_sum;
        
    }

    void sum_backtrack(int n, int ind, vector<int> &nums, int &sum, vector<int> &temp)
    {
        if (ind >= n)
        {
            cal_XOR_sum(temp, sum);
            return;
        }
        temp.push_back(nums[ind]);
        sum_backtrack(n, ind + 1, nums, sum, temp);
        temp.pop_back();
        sum_backtrack(n, ind + 1, nums, sum, temp);
        return;
    }

public:
    int subsetXORSum(vector<int> &nums)
    {
        vector<int> temp;
        int sum =0;
        sum_backtrack(nums.size(), 0, nums, sum, temp);
        return sum;
    }
};



class Solution {
public:
int n;
    int f(int i, int xorsum, vector<int>& nums){
        if (i==n) return xorsum;
        int x=nums[i];
        int take=f(i+1, xorsum^x, nums);
        int notake=f(i+1, xorsum, nums);
        return take+notake;
    }
    int subsetXORSum(vector<int>& nums) {
        n=nums.size();
        return f(0, 0, nums);
    }
};


int main()
{

    return 0;
}