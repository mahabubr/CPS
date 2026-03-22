#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    set<int> st;

    while (n--) {
        int x;

        cin >> x;

        st.insert(x);
    }

    int cnt = 0;

    for (auto x : st) {
        if (st.count(x + k)) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}