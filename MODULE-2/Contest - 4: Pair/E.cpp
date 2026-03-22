#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) return a.second > b.second;
    else return a.first < b.first;
}

int main() {

    int t;

    scanf("%d", &t);


    while (t--) {
        int n;

        scanf("%d", &n);

        vector<pair<int, int>>  v;

        while (n--) {
            int a, b;

            scanf("%d%d", &a, &b);

            v.push_back({ a, b });
        }

        sort(v.begin(), v.end(), cmp);

        for (auto x : v) {
            printf("%d %d\n", x.first, x.second);
        }
    }


    return 0;
}