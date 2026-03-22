#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    cin >> s;

    map<char, int> mp;

    for (auto c : s) {
        mp[c]++;
    }

    string ans = "Yes";

    for (auto& it : mp) {
        if (it.second != 2) {
            ans = "No";
        }
    }

    cout << ans << endl;

    return 0;
}