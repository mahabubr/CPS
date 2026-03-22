#include <bits/stdc++.h>

using namespace std;


int main() {

    int t;

    cin >> t;

    while (t--) {
        pair<int, int> a, b;

        cin >> a.first >> a.second;

        cin >> b.first >> b.second;

        int mxa = max(a.first, a.second);
        int mxb = max(b.first, b.second);

        int mna = min(a.first, a.second);
        int mnb = min(b.first, b.second);

        if (mxa == mxb && mna + mnb == mxa) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }


    return 0;
}