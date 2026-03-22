#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    cin >> s;

    int n = s.size();

    bool flag = true;

    if (n != 8) flag =false;

    if (s[1] == '0') flag = false;

    if (!isupper(s[0]))  flag = false;
    if (!isupper(s[7])) flag = false;

    for (int i = 1; i < 7; i++) {
        if (!isdigit(s[i])) flag = false;
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}