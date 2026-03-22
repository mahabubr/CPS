#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    vector<bool> v(1000, false);

    while (q--) {
        int a;

        cin >> a;

        char b;

        cin >> b;

        if (v[a] == false && b == 'M') {
            cout << "Yes" << endl;

            v[a] = true;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}
