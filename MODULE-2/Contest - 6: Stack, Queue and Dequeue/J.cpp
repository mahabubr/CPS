#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    string s;

    cin >> s;

    stack<char> st;

    int bal = 0;

    for (auto c : s) {
        if (c == '(') {
            st.push('(');
        }
        else {
            if (!st.empty()) {
                st.pop();
            }
            else {
                bal++;
            }
        }
    }

    for (int i = 1; i <= bal; i++) {
        cout << "(";
    }

    cout << s;

    for (int i = 1; i <= st.size(); i++) {
        cout << ')';
    }

    cout << endl;

    return 0;
}