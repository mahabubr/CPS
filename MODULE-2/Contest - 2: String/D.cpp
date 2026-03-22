#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    getline(cin, s);

    for (auto& x : s) {
        x = tolower(x);
    }

    vector<int> cnt(25);

    for (auto x : s) {
        if (x >= 'a' && x <= 'z') {
            cnt[x - 'a']++;
        }
    }

    bool flag = true;


    for (auto x : cnt) {
        if (x == 0) {
            flag = false;
            break;
        }
    }

    if (flag) cout << "pangram" << endl;
    else cout << "not pangram" << endl;

    return 0;
}