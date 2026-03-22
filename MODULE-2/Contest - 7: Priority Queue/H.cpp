#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;

    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    long long h = 0;

    while (n--) {
        long long x;

        cin >> x;

        h += x;

        pq.push(x);

        if (h < 0) {
            h -= pq.top();
            pq.pop();
        }

    }

    cout << pq.size() << endl;

    return 0;
}