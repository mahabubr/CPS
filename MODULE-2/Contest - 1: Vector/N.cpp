#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int cnt = 1;
    int cur = 1;

    for (int i = 1; i < n; i++) {
        if (v[i] >= v[i - 1]) {
            cur++;
        }
        else {

            cur  =1;
        }

        cnt = max(cnt, cur);

    }

    cout << cnt << endl;

    return 0;
}
