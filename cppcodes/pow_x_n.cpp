#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double powHelper(double x, int n) {
        if (x == 0) return 0;
        if (n == 0) return 1;
        double thirdterm = (n%2 == 0) ? 1 : x;
        double res;
        res = powHelper(x, n/2) ;
        return res * res * thirdterm;

    }

    double myPow(double x, int n) {
        if (n < 0) return 1/powHelper(x,abs(n));
        else return powHelper(x,abs(n));
    }
};