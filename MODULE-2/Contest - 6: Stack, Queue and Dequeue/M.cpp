#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;

    cin >> q;

    stack<int> st;

    while (q--) {
        int t;

        cin >> t;

        if (t == 1) {
            int x; cin >> x;

            st.push(x);
        }
        else if (t == 2) {
            if (!st.empty()) st.pop();
        }
        else {
            if (st.empty()) cout << "Empty!" << "\n";
            else cout << st.top() << "\n";
        }
    }

    return 0;
}