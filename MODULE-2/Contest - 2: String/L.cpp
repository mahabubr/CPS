#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    vector<string> v;

    for (int i = 0; i < n; i++) {
        string x;

        cin >> x;

        v.push_back(x);
    }

    sort(v.begin(), v.begin() + k);

    for (int i = 0; i < k; i++) {
        cout << v[i] << endl;
    }

    return 0;
}