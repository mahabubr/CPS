#include<bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<pair<int, string>> pq;
    map<string, int> mp;

    string cmd;

    while (cin >> cmd) {
        if (cmd == "ADD") {
            string id; cin >> id;

            int p; cin >> p;

            pq.push({ p, id });
            mp[id] = p;
        }
        else if (cmd == "CHANGE") {
            string id; cin >> id;

            int p; cin >> p;

            pq.push({ p, id });
            mp[id] = p;
        }
        else {
            while (mp[pq.top().second] != pq.top().first) {
                pq.pop();
            }

            cout << pq.top().second << " " << pq.top().first << endl;
            pq.pop();
        }
    }

    return 0;
}