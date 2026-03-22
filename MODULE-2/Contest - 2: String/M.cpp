#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        string s;

        cin >> s;

        char tmp = s[0];

        int cnt = 0;

        for (auto x : s) {
            if (x == tmp) cnt++;
        }

        int n = s.size();



        if (cnt >= n - 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}