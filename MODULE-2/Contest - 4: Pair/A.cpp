#include <bits/stdc++.h>

using namespace std;

int main() {

    pair<int, int> pr;

    cin >> pr.first >> pr.second;

    int ans = pr.first + pr.second;

    ans += pr.first * pr.second;

    if (ans == 111) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}