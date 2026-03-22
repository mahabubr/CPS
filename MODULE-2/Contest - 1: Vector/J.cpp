#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;

    cin >> t;

    while (t--) {
        int n;

        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }


        sort(v.begin(), v.end());

        vector<int> ans;

        ans.push_back(v[0]);

        for (int i = 1; i < n; i++) {
            if (v[i] != v[i - 1]) {
                ans.push_back(v[i]);
            }
        }

        int sum = ans[ans.size() - 1] + ans[ans.size() - 2];

        cout << sum << endl;
    }

    return 0;
}
