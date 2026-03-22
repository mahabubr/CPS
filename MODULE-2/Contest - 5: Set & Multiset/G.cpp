#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v;

    int n;

    cin >> n;

    while (n--) {
        int x;

        cin >> x;

        v.push_back(x);
    }

    int m;

    cin >> m;

    set<int> st;

    while (m--) {
        int x;

        cin >> x;

        st.insert(x);
    }

    vector<int>ans;

    for (auto x : v) {
        if (st.count(x)) continue;

        ans.push_back(x);
    }

    cout << ans.size() << endl;

    for (auto x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}