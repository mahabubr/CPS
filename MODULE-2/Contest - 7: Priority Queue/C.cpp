#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    priority_queue<int, vector<int>, greater<int>> pq;

    while (k--) {
        int x;

        cin >> x;

        pq.push(x);

        n--;
    }

    cout << pq.top() << endl;

    while (n--) {
        int x;

        cin >> x;

        pq.push(x); pq.pop();

        cout << pq.top() << endl;
    }

    return 0;
}