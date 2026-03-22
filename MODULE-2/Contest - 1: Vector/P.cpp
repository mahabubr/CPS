#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int cnt = 1;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= cnt) cnt++;
    }

    cnt--;

    cout << cnt << endl;

    return 0;
}
