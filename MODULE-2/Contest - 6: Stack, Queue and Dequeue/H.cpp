#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    deque<int> dq;

    bool flag = false;

    while (n--) {
        int x;

        cin >> x;

        if (flag) {
            dq.push_front(x);
        }
        else {
            dq.push_back(x);
        }

        flag = !flag;
    }

    if (flag) {
        for (auto it = dq.rbegin(); it != dq.rend(); it++) {
            cout << *it << " ";
        }
    }
    else {
        for (auto x : dq) {
            cout << x << " ";
        }
    }

    cout << endl;

    return 0;
}