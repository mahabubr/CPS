#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    cin >> s;

    for (auto& x : s)x = tolower(x);

    string new_s = "";

    for (auto x : s) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y') {
            continue;
        }

        new_s += x;
    }

    for (auto x : new_s) {
        cout << "." << x;
    }

    cout << endl;

    return 0;
}