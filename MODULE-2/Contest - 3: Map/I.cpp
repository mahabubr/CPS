#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    map<int, int> mp;

    while (n--) {
        int x;
        cin >> x;

        mp[x]++;
    }

    int ans = 0;

    for (auto [x, y] : mp) {
        ans = max(ans, y);
    }

    cout << ans << endl;

    return 0;
}