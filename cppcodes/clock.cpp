#include<bits/stdc++.h>
#include<iostream>
#include <sstream>
#include<iomanip>
using namespace std;

void solve(string s) {
    int hours = stoi(s.substr(0,2));
    int minutes = stoi(s.substr(3,2));
    if (hours == 0 && minutes == 0) {
        cout << "12:00 AM" << endl;
    }
    else if (hours >= 12) {
        hours = abs(hours-12);
        hours = (hours == 0) ? 12: hours;
        cout << setfill('0') << setw(2) << hours << ":" << setfill('0') << setw(2) <<  minutes << " PM" << endl;
    }
    // else if (hours == 0) {
    //     hours = 12;
    // }
    else {
        hours = (hours == 0) ? 12: hours;
        // cout << "hours value=" << hours << "; ";
        cout << setfill('0') << setw(2) << hours << ":" << setfill('0') << setw(2) << minutes << " AM" << endl;
    }
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
        string s;
        cin >> s;
        // cout << s << endl;
        solve(s);

    }
    return 0;
}