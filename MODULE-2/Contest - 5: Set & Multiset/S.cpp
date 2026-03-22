#include<bits/stdc++.h>

using namespace std;


int main() {

    multiset<pair<int, int>> st;

    while (true) {
        int n;

        cin >> n;

        if (n == 0) break;

        if (n == 1) {
            int k, p;

            cin >> k >> p;

            st.insert({ p, k });
        } if (n == 2) {
            if (st.empty()) {
                cout << 0 << endl;
            }
            else {
                auto it = prev(st.end());

                cout << it->second << endl;

                st.erase(it);
            }
        }
        else if (n == 3) {
            if (st.empty()) {
                cout << 0 << endl;
            }
            else {
                auto it = st.begin();

                cout << it->second << endl;

                st.erase(it);
            }
        }
    }

    return 0;
}