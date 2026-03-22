#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;

        cin >> s;

        stack<char> st;

        bool flag = true;

        for (auto c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                if (st.empty()) {
                    flag = false;
                    break;
                };

                char tmp = st.top();
                st.pop();

                if (c == ')' && tmp != '(') flag = false;
                if (c == '}' && tmp != '{') flag = false;
                if (c == ']' && tmp != '[') flag = false;
            }

            if (!flag) {
                break;
            }
        }

        if (!st.empty()) flag = false;

        cout << (flag ? "YES" : "NO") << endl;

    }

    return 0;
}