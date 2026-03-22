#include<bits/stdc++.h>

using namespace std;

int main() {
    int q;

    cin >> q;

    stack<int> st, mx;

    while (q--) {
        int t;

        cin >> t;

        if (t == 1) {
            int x;

            cin >> x;

            st.push(x);

            if (mx.empty() || x >= mx.top()) {
                mx.push(x);
            }
        }
        else if (t == 2) {
            
            if (!st.empty()) {
                if (st.top() == mx.top()) {
                    mx.pop();
                }
            }
            
            st.pop();
        }
        else if (t == 3) {
            cout << mx.top() << endl;
        }
    }

    return 0;
}