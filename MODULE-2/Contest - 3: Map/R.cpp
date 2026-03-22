#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        map<long long, bool> mp;

        long long n;

        cin >> n;

        long long sum = 0;

        mp[sum] = true;

        bool flag = false;

        for (long long i = 0; i < n; i++) {
            long long x;

            cin >> x;

            if (i % 2 == 0) {
                x *= -1;
            }

            sum += x;

            if (mp[sum]) {
                flag = true;
            }

            mp[sum] = true;
        }

        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    return 0;
}