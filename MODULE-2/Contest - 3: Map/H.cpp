#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    map<int, int> mp;

    while (n--) {
        int a;

        cin >> a;

        mp[a]++;
    }

    int cnt = 0;

    for (auto [x, y] : mp) {
        if (x < y) {
            cnt += y - x;
        }
        else if(x > y) {
            cnt += y;
        }
    }

    cout << cnt << endl;

    return 0;
}