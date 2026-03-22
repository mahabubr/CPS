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


    for (auto x : v) {

        if (mp[x]) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}