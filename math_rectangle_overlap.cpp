#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isRectangleOverlap(vector<int> &a, vector<int> &b)
    {
        if (a[0] < b[0] && a[2] > b[0] || b[0] < a[0] && b[2] > a[0])
        {
            if (a[1] < b[1] && a[3] > b[1])
                return true;
            else if (a[1] < b[3] && a[3] > b[3])
                return true;
            else if (a[1] >= b[1] && a[3] <= b[3])
                return true;
        }
        else if (a[0] < b[2] && a[2] > b[2] || b[0] < a[2] && b[2] > a[2])
        {
            if (a[1] < b[1] && a[3] > b[1])
                return true;
            else if (a[1] < b[3] && a[3] > b[3])
                return true;
            else if (a[1] >= b[1] && a[3] <= b[3])
                return true;
        }
        return false;
    }
};


//shorter solution with better logic 

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
      return rec1[0]<rec2[2] && rec1[1] < rec2[3] && rec2[0]<rec1[2] && rec2[1]< rec1[3];
    }
};