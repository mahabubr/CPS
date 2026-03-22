#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t;

    cin >> t;

    while (t--) {
        long long n;

        cin >> n;

        priority_queue<long long, vector<long long>, greater<long long>> pq;

        while (n--) {
            long long x;

            cin >> x;

            pq.push(x);
        }

        long long ans = 0;

        while (pq.size() >= 2) {
            long long tp1 = pq.top();
            pq.pop();
            long long tp2 = pq.top();
            pq.pop();

            ans += tp1 + tp2;

            pq.push(tp1 + tp2);
        }

        cout << ans;

        // while (!pq.empty()) {
        //     cout << pq.top() << " ";

        //     pq.pop();
        // }

        cout << endl;
    }

    return 0;
}