#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        int ans = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
                ans -= 1;
            else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
                ans -= 10;
            else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
                ans -= 100;
            else if (s[i] == 'I')
                ans += 1;
            else if (s[i] == 'V')
                ans += 5;
            else if (s[i] == 'X')
                ans += 10;
            else if (s[i] == 'L')
                ans += 50;
            else if (s[i] == 'C')
                ans += 100;
            else if (s[i] == 'D')
                ans += 500;
            else if (s[i] == 'M')
                ans += 1000;
        }
        return ans;
    }
};


// can also be solved using unordered map concept. 
// we neeed to map all the possible symbols with their numeric value and thus we can calculate it by comapring the two.

class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map <char,int> mp{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    for(int i=0;i<s.size();i++){
        if(mp[s[i]]<mp[s[i+1]]){
            //for cases such as IV,CM, XL, etc...
            ans=ans-mp[s[i]];
        }
        else{
            ans=ans+mp[s[i]];
        }
    }
        return ans;
    }
};