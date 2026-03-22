#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mx = a[0];
    int idx = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] > mx) {
            mx = a[i];
            idx = i + 1;
            break;
        }
    }

    cout << idx << endl;

    return 0;
}
