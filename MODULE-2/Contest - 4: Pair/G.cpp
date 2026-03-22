#include <bits/stdc++.h>

using namespace std;


int main() {

    int n, m;

    cin >> n >> m;

    map<string, string> mp;

    while (n--) {
        string a, b;

        cin >> a >> b;

        b += ';';

        mp[b] = a;
    }

    while (m--) {
        string a, b;

        cin >> a >> b;

        cout << a << " " << b << " " << "#" << mp[b] << endl;;
    }


    return 0;
}