#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    cin >> s;

    bool inf = true;

    while (inf) {
        inf = false;

        int n = s.size();

        for (int i = 0;i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                inf = true;

                s.erase(i, 2);

                break;
            }
        }
    }

    if (s == "") cout << "Empty String" << endl;
    else cout << s << endl;


    return 0;
}