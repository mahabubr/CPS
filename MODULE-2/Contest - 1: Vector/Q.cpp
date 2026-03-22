#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int mxA = *max_element(a.begin(), a.end());
    int mxB = *max_element(b.begin(), b.end());


    cout << mxA + mxB << endl;

    return 0;
}
