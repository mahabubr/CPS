#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    string s;

    cin >> s;

    int i = 0;

    while (i + 1 < s.size()) {

        if (s[i] == 'n' && s[i + 1] == 'a') {
            s.replace(i, 2, "nya");
            i += 3;
        }
        else {
            i++;
        }

    }

    cout << s << endl;

    return 0;
}