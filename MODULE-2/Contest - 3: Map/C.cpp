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

        if (mp[s] >= 2) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }



    return 0;
}