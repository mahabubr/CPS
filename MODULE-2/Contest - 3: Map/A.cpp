#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;

    cin >> q;

    map<string, int> mp;

    while (q--) {
        int t;

        cin >> t;

        if (t == 1) {
            string x;
            int y;

            cin >> x >> y;

            mp[x] += y;
        }
        else if (t == 2) {
            string x;

            cin >> x;

            mp.erase(x);
        }
        else {
            string x;

            cin >> x;


            if (mp.find(x) != mp.end()) {

                cout << mp[x] << endl;
            }
            else {
                cout << 0 << endl;
            }

        }
    }

    return 0;
}