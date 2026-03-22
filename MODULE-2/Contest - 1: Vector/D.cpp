#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        v.push_back(x);
    }

    int cnt = 0;

    for (auto it : v) {
        if (it >= v[k - 1] && it > 0) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
