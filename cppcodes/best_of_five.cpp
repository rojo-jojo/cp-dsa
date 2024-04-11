#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(string s) {
    int acount = 0, bcount = 0;
    for (int i=0; i < 5; i++) {
        if (s.substr(i,1) == "A") acount++;
        else bcount++;

        if (acount >= 3) {
            cout << "A" <<endl;
            return;
        }
        else if(bcount >= 3) {
            cout << "B" << endl;
            return;
        }

    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    

    string s;
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        solve(s);
    }
    return 0;
}