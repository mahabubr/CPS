#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;

    cin >> t;

    while (t--) {
        int n;

        cin >> n;

        vector<int> v(n + 1);

        for (int i = 0; i < n; i++) {
            int x;

            cin >> x;

            v[x]++;
        }

        int ans = -1;

        for (int i = 0; i <= n; i++) {
            if (v[i] >= 3) {
                ans = i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
