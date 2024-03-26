#include<bits/stdc++.h>
#include<iostream>
#include <sstream>
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
    

    
    int t, n, enterNumber;
    cin >> t;

    while (t--) {
        cin >> n;
        vector <vector <int>> matrix;
        while (n--) {
            vector <int> row;
            string line;
            getline(cin, line);
            istringstream iss(line);
            while (iss >> enterNumber) {
                row.push_back(enterNumber);
            }
            cout << "A row output:\n";
            for (int i=0; i < row.size(); i++){
                cout << row[i] << ", ";
            }
            cout << endl;
        }
    }
    return 0;
}