#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;

    cin >> s;

    stack<char>  st;

    for (auto c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        }
        else {
            st.push(c);
        }
    }

    string ans;

    while (!st.empty()) {
        char top = st.top();

        ans += top;

        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}