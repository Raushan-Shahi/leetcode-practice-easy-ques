#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int distMoney(int money, int children)
    {
        if (money < children)
            return -1;

        int temp = money - children;
        int child = children;
        int ans = 0;
        while (temp >= 7 && child != 0)
        {
            temp = temp - 7;
            ans++;
            child--;
        }
        if (temp == 3 && children - ans == 1)
        {
            ans--;
            return ans;
        }
        else if (temp != 0 && children - ans == 0)
        {
            ans--;
            return ans;
        }
        return ans;
    }
};

int main()
{

    return 0;
}