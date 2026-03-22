#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int n;

        cin >> n;

        string s;

        cin >> s;

        auto mn_el = min_element(s.begin(), s.end());
        char mn = *mn_el;

        int mini = 0;

        for (int i = 0; i < n; i++) {
            if (mn == s[i]) mini = i;
        }

        cout << mn;


        for (int i = 0; i < n; i++) {
            if (i == mini) {
                continue;
            }

            cout << s[i];
        }

        cout << endl;
    }

    return 0;
}