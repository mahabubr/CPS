#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    set<int> st;

    while (n--) {
        int x;

        cin >> x;

        st.insert(x);
    }


    if (st.size() < 2) {
        cout << "NO" << endl;
    }
    else {
        cout << *next(st.begin()) << endl;
    }

    return 0;
}