#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<int, int> mp;

    long long cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 30; j++) {
            int pw = (1 << j);

            int need = pw - v[i];

            cnt += mp[need];
        }

        mp[v[i]]++;
    }

    cout << cnt << endl;

    return 0;
}