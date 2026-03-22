#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    map<string, int> mp;

    while (t--) {
        string s;

        cin >> s;

        mp[s]++;
    }

    int mx = 0;

    for (auto [x, y] : mp) {

        mx = max(mx, y);
    }

    for (auto [x, y] : mp) {
        if (y == mx) {
            cout << x << endl;
        }
    }

    return 0;
}