#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {

        int n;

        cin >> n;

        bool flag = false;

        for (int i = 0; i < 26 && !flag; i++) {
            for (int j = 0; j < 26 &&!flag; j++) {
                for (int k = 0; k < 26 && !flag; k++) {
                    if (i + j + k == n - 3) {
                        cout << char(i + 'a') << char(j + 'a') << char(k + 'a') << endl;

                        flag = true;
                    }
                }
            }
        }
    }

    return 0;
}