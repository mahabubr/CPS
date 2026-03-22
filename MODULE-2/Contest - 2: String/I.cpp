#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {

        string str;

        for (int i = 0; i < 8; i++) {
            string s;

            cin >> s;

            for (int j = 0; j < s.size();j++) {
                if (s[j] >= 'a' && s[i] <= 'z') {
                    str += s[j];
                }
            }
        }

        cout << str << endl;
    }

    return 0;
}