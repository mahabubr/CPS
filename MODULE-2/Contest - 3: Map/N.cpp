#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    map<int, int> mp;

    while (n--) {
        int x;

        cin >> x;

        mp[x]++;
    }

    while (m--) {
        int x;

        cin >> x;

        auto it = mp.upper_bound(x);

        if (it == mp.begin()) {
            cout << -1 << " ";

            continue;
        }

        it--;

        cout << it->first << " ";

        mp[it->first]--;

        if (mp[it->first] == 0) {
            mp.erase(it->first);
        }
    }

    return 0;
}