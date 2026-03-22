#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;

    cin >> t;

    vector<pair<pair<string, string>, int> > v;

    while (t--) {
        string s1, s2;
        int s3;

        cin >> s1 >> s2 >> s3;

        v.push_back({ {s2, s1}, -s3 });
    }

    sort(v.begin(), v.end());

    for (auto x : v) {
        cout << x.first.second << " " << x.first.first << " " << -x.second << endl;
    }

    return 0;
}