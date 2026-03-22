#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;

    cin >> t;

    vector<pair<int, pair<int, int>>> v;

    while (t--) {
        int a, b, c;

        cin >> a >> b >> c;

        v.push_back({ a, { b, c } });
    }

    sort(v.begin(), v.end());

    for (auto x : v) {
        cout << x.first << " " << x.second.first << " " << x.second.second << endl;
    }


    return 0;
}