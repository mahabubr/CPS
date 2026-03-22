#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;

    cin >> t;

    set<pair<string, string>> st;

    while (t--) {
        string s1, s2;

        cin >> s1 >> s2;

        st.insert({ s1, s2 });
    }

    cout << st.size() << endl;

    return 0;
}