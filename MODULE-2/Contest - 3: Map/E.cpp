#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    map<string, bool> mp;

    vector<string> v;


    while (n--) {
        string s;

        cin >> s;

        v.push_back(s);
    }


    while (m--) {
        string s;

        cin >> s;

        mp[s] = true;
    }

    int cnt = 0;

    for (auto x : v) {

        string str = x.substr(3, 3);

        if (mp[str]) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}