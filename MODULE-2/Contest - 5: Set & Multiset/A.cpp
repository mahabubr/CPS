#include<bits/stdc++.h>

using namespace std;

int main() {

    int n, m;

    while (cin >> n >> m) {

        set<int> s;

        for (int i = 0;i < n; i++) {
            int x;

            cin >> x;

            s.insert(x);
        }

        for (int i = 0; i < m; i++) {
            int x;

            cin >> x;

            s.insert(x);
        }

        for (auto x : s) {
            cout << x << " ";
        }

        cout << endl;
    }



    return 0;
}