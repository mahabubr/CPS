#include<bits/stdc++.h>

using namespace std;

int main() {
    while (true) {
        int n, m;

        cin >> n >> m;

        if (n == 0 && m == 0) break;

        set<int> st;

        while (n--) {
            int x;

            cin >> x;

            st.insert(x);
        }

        int cnt = 0;

        while (m--) {
            int x;

            cin >> x;

            if (st.count(x)) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}