#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int n;

        cin >> n;

        priority_queue<int> pq;

        while (n--) {
            int x;

            cin >> x;

            pq.push(x);
        }

        while (!pq.empty()) {
            int tp = pq.top();

            cout << tp << " ";

            int tmp = tp / 2;

            if (tmp > 0) {
                pq.push(tmp);
            }

            pq.pop();
        }

        cout << endl;
    }

    return 0;
}