#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    set<int> st;

    while (n--) {
        int x;

        cin >> x;

        st.insert(x);
    }

    int m;

    cin >> m;

    while (m--) {
        int x;

        cin >> x;

        if (st.count(x)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}