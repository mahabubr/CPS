#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;

    cin >> t;

    while (t--) {
        int n, a, b;

        cin >> n >> a >> b;

        string s;

        cin >> s;

        pair<int, int> q = { 0, 0 };
        pair<int, int> d = { 0, 0 };

        q.first = a;
        q.second = b;

        if (q == d) {
            cout << "YES" << endl;
            break;
        }

        bool flag = false;

        int tmp = 100;

        while (tmp--) {
            for (auto c : s) {
                if (c == 'N') {
                    d.second++;
                }

                if (c == 'E') {
                    d.first++;
                }

                if (c == 'S') {
                    d.second--;
                }

                if (c == 'W') {
                    d.first--;
                }

                if (d == q) {
                    flag = true;
                }
            }
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}