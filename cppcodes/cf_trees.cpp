#include<bits/stdc++.h>
#include<iostream>
#include <sstream>
#include<iomanip>
using namespace std;

void solve(vector<int> &vec) {
    int total_v = vec[0]*2 + vec[1] + vec[2];

}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    


    // string rawInput;
    // vector<String>
    int t, n;
    cin >> t;
    while (t--) {
        vector<int> s;
        int temp = 3;
        while (temp--) {
            cin >> n;
            s.push_back(n);
        }
        solve(s);

    }
    return 0;
}