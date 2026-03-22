#include <bits/stdc++.h>

using namespace std;

int main() {
    long long q, k;

    cin >> q >> k;

    map<string, long long> mp;

    while (q--) {
        string s;
        long long n;

        cin >> s >> n;

        mp[s] += n;
    }

    vector<long long>  v;

    for (auto [x, y] : mp) {
        v.push_back(y);
    }

    sort(v.begin(), v.end(), greater<long long>());

    long long ans = 0;

    for (long long i = 0; i < min(k, (long long)v.size()); i++) {
        ans += v[i];
    }

    cout << ans << endl;

    return 0;
}