#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;


    while (t--) {
        int n;

        cin >> n;

        vector<pair<int, int>> v;

        while (n--) {
            int a, b;

            cin >> a >> b;

            v.push_back({ a, b });
        }

        int ans = 0;

        sort(v.begin(), v.end());

        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < v.size(); i++) {
            pq.push(v[i].second);

            if (v[i].first < pq.size()) {
                pq.pop();
            }
        }

        while (!pq.empty()) {
            ans += pq.top();

            pq.pop();
        }

        cout << ans << endl;
    }

    return 0;
}