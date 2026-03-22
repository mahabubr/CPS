#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;

    while (cin >> N) {
        if (N == 0) break;

        map<string, int> mp;


        for (int i = 0;i < N; i++) {
            string s;

            cin >> s;

            mp[s]++;
        }

        string ans = "";
        int mx = INT_MIN;

        for (auto [x, y] : mp) {
            if (y > mx) {
                mx = y;

                ans = x;
            }
        }

        cout << ans << endl;
    }



    return 0;
}