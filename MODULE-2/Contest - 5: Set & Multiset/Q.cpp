#include<bits/stdc++.h>

using namespace std;


int main() {
    string s;

    cin >> s;


    set<char>st;

    for (auto c : s) {
        st.insert(c);
    }

    if (st.size() == s.size()) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}