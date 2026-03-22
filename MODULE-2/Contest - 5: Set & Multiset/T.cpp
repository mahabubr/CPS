#include<bits/stdc++.h>

using namespace std;


int main() {
    long long n, m;

    cin >> n >> m;

    set<long long> row, col;

    while (m--) {
        long long x, y;

        cin >> x >> y;

        row.insert(x);
        col.insert(y);

        long long ans = (n - row.size()) * (n - col.size());

        cout << ans << " ";
    }

    cout << endl;

    return 0;
}