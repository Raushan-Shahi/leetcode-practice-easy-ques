#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    

class Solution {
public:
    int findComplement(int num) {
    long long ans=1;
	while(num>=ans){
		ans*=2;
	}
	return ans-num-1;
    }
};