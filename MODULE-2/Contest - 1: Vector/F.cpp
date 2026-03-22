#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v;

    int t;

    cin >> t;

    while (t--) {
        int x;

        cin >> x;

        if (x == 0) {
            int a;

            cin >> a;

            v.push_back(a);
        }
        else if (x == 1) {
            int a;

            cin >> a;

            cout << v[a] << endl;
        }
        else {
            v.pop_back();
        }
    }

    return 0;
}
