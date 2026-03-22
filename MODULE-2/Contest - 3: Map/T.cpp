#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;


    map<string, string> mp;

    while (t--) {
        string s1, s2;

        cin >> s1 >> s2;

        mp[s1] = s2;
    }

    string s;

    while (cin >> s) {

        if (mp.find(s) != mp.end()) {
            cout << s << "=" << mp[s] << endl;
        }
        else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}