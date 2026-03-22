#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    vector<int> v[n];

    while (q--) {
        int t;

        cin >> t;

        if (t == 0) {
            int a, b;

            cin >> a >> b;

            v[a].push_back(b);
        }
        else if (t == 1) {
            int a;

            cin >> a;

            for (int i = 0; i < v[a].size();i++) {
                if (i > 0) cout << " ";
                cout << v[a][i];
            }

            cout << endl;
        }
        else {
            int a;

            cin >> a;

            v[a].clear();
        }
    }

    return 0;
}
