#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    int i = 1;


    while (t--) {
        int n, m;

        cin >> n >> m;

        map<pair<int, int>, bool> mp;

        bool flag = true;

        while (m--) {
            int a, b;

            cin >> a >> b;

            if (mp[{a, b}]) {
                flag = false;
            }

            mp[{a, b}] = true;
        }

        if (flag) cout << "Scenario #" << i << ": possible" << endl;
        else cout << "Scenario #" << i  << ": impossible" << endl;

        i++;

    }

    return 0;
}