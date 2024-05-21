#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minChanges = INT_MAX;
        int changes = 0;

        for (int i = 0; i < blocks.size(); i++) {
            if (blocks[i] == 'W') changes++;
            if (i < k-1) continue; // Let the window grow to size k
            minChanges = min(changes, minChanges);
            if (blocks[i - (k - 1)] == 'W') changes--;
        }

        return minChanges;
    }
};

int main()
{

    return 0;
}