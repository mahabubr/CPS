#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, b, d;

    cin >> n >> b >> d;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int cnt = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] > b) continue;

        cnt += v[i];

        if (cnt > d) {
            ans++;
            cnt = 0;
        }
    }

    cout << ans << endl;

    return 0;
}
