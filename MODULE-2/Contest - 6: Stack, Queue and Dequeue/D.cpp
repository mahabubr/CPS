#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;

    cin >> n;

    stack<pair<int, int>> st;

    st.push({ 0, 0 });

    for (int i = 1; i <= n; i++) {
        int x;

        cin >> x;

        while (x <= st.top().second) {
            st.pop();
        }

        cout << st.top().first << " ";

        st.push({ i, x });
    }

    return 0;
}