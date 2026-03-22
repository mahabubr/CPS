#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;

    cin >> q;

    queue<int> qu;

    while (q--) {
        int t;

        cin >> t;

        if (t == 1) {
            int x; cin >> x;

            qu.push(x);
        }
        else if (t == 2) {
            if (!qu.empty()) qu.pop();
        }
        else {
            if (qu.empty()) {
                cout << "Empty!" << "\n";
            }
            else {
                cout << qu.front() << "\n";
            }
        }
    }

    return 0;
}