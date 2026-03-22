#include<bits/stdc++.h>

using namespace std;

int main() {
    int q;

    cin >> q;

    set<int> st;

    while (q--) {
        int x, y;

        cin >> x >> y;


        if (x == 1) {
            st.insert(y);
        }
        else if (x == 2) {
            st.erase(y);
        }
        else {
            if (st.count(y)) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }


    return 0;
}