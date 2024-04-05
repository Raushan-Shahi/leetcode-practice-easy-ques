#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maximumCount(vector<int>& v) {
        int n = v.size();
        int firstpos = lower_bound(v.begin(), v.end(), 1) - v.begin();
        int firstzero = lower_bound(v.begin(), v.end(), 0) - v.begin();
        int numberofZero = firstpos - firstzero;
        return max(n- firstpos, firstpos - numberofZero);
    }
};