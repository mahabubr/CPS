#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    int s = 0, d = 0;

    int l = 0, r = n - 1;

    bool flag = true;

    while (l <= r) {
        int cur = 0;

        if (v[l] > v[r]) {
            cur = v[l];
            l++;
        }
        else {
            cur = v[r];
            r--;
        }

        if (flag) {
            s += cur;

            flag = false;
        }
        else {
            d += cur;

            flag = true;
        }
    }

    cout << s << " " << d << endl;

    return 0;
}
