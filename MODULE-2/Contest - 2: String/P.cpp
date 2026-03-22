#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    string s;

    cin >> s;

    int up = 1, lo = 1, dig = 1, sp = 1;

    string tmp = "!@#$%^&*()-+";

    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) up = 0;
        if (islower(s[i])) lo = 0;
        if (isdigit(s[i])) dig = 0;

        for (auto x : tmp) {
            if (s[i] == x) sp = 0;
        }
    }

    int cnt = up + lo + dig + sp;

    cout << max(cnt, 6 - n);

    return 0;
}