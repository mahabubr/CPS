#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n, k;

    cin >> n >> k;

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    while (n--) {
        long long x;

        cin >> x;

        pq.push(x);
    }

    long long cnt = 0;

    while (pq.top() < k) {

        if (pq.size() < 2) {
            cout << -1 << endl;
            return 0;
        }

        long long tp1 = pq.top(); pq.pop();
        long long tp2 = pq.top(); pq.pop();

        pq.push(tp1 + (2 * tp2));

        cnt++;
    }

    cout << cnt << endl;

    return 0;
}