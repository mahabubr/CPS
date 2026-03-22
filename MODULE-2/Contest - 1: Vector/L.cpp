#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int n;

        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> b = v;

        sort(b.begin(), b.end());

        int mx1 = b[b.size() - 1], mx2 = b[b.size() - 2];

        for (auto x : v) {
            if (x == mx1) {
                cout << x - mx2 << " ";
            }
            else {
                cout << x - mx1 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
