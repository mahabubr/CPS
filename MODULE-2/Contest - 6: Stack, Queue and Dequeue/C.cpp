#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;

    cin >> s;

    stack<char> l, r;

    for (auto c : s) {
        if (c >= 'a' && c <= 'z') {
            l.push(c);
        }
        else if (c == 'L' && !l.empty()) {
            r.push(l.top());
            l.pop();
        }
        else if (c == 'R' && !r.empty()) {
            l.push(r.top());
            r.pop();
        }
    }

    string ans = "";

    while (!l.empty()) {
        char top = l.top();

        ans = top + ans;

        l.pop();
    }


    while (!r.empty()) {
        char top = r.top();

        ans += top;

        r.pop();
    }

    cout << ans << endl;

    return 0;
}