#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    n *= 2;

    multiset<int>st;

    int mx = INT_MIN;

    while (n--) {
        int x;

        cin >> x;

        if (st.count(x)) st.erase(x);
        else st.insert(x);

        mx = max(mx, (int)st.size());
    }

    cout << mx << endl;

    return 0;
}