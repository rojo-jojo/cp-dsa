#include<bits/stdc++.h>
#include<iostream>
#include <sstream>
using namespace std;

void solve(int n) {
    int grid = 2*n;
    string symbol = "#", isymbol = "#";
    int jflip = 2, iflip = 0;
    int i = 0;
    while (i<n) {
        if (iflip < 2) {
            symbol = isymbol;
            for (int j=0; j<grid; j++) {
                cout << symbol ;
                jflip--;
                if ((j+1) % 2 == 0) {
                    symbol = (symbol == "#") ? ".":"#";
                }


            }
            jflip = 2;
            iflip++;
            cout << endl;

        }
        else {
            iflip = 0;
            i++;
            symbol = (isymbol == "#") ? ".":"#";
            isymbol = symbol;

        }
        
        // if (iflip == 0) {
        //     symbol = (isymbol=="#") ? "." : "#";
        //     iflip = 2;
        // }
        // else iflip--;
        // if ((i+1) % 2 ==0) {
        //     swap(symbol, isymbol);
        //     // symbol = (isymbol == "#") ? ".":"#";
        //     // isymbol = symbol;
        // }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    


    for (int i = 1; i < 100000; i++) {
        
    }

    // string rawInput;
    // vector<String>
    int t, n;
    cin >> t;
    while (t--) {
        // vector <int> vec;
        // while (maxnum--) {
        //     cin >> n;
        //     if (n == '\n') break;
        //     vec.push_back(n);
        // }
        cin >> n;
        solve(n);

    }
    return 0;
}