#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;

    unordered_map<int, int> mp;

    vector<int> o;

    while (cin >> x) {
        if (mp[x] == 0) {
            o.push_back(x);
        }

        mp[x]++;
    }

    for (auto x : o) {
        cout << x << " " << mp[x] << endl;
    }

    return 0;
}