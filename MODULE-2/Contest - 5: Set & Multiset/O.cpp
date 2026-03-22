#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;

    cin >> t;

    while (t--) {
        int n;

        cin >> n;

        multiset<pair<int, int>> st;

        while (n--) {
            int x, y;

            cin >> x >> y;

            st.insert({ x, y });
        }

        bool flag = true;

        while (!st.empty()) {
            auto it = st.begin();

            pair<int, int> p = *it;

            st.erase(it);

            auto it2 = st.find({ p.second, p.first });

            if (it2 != st.end()) {
                st.erase(it2);
            }
            else {
                flag = false;
                break;
            }
        }

        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}