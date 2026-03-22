#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2, s3;

    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    int a = 0, b = 0, c = 0;

    for (auto x : s1) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
            a++;
        }
    }

    for (auto x : s2) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
            b++;
        }
    }

    for (auto x : s3) {
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
            c++;
        }
    }

    if (a == 5 && b == 7 && c == 5) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}