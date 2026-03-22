#include<bits/stdc++.h>

using namespace std;

struct cmp {
    bool operator()(const pair<int, int>& a, const pair<int, int> b) const {
        if (a.first == b.first) {return a.second > b.second;}
        else return a.first < b.first;
    }
};

int main() {
    int t;

    scanf("%d", &t);

    while (t--) {
        int n;

        scanf("%d", &n);

        multiset<pair<int, int>, cmp> st;

        while (n--) {
            int a, b;

            scanf("%d%d", &a, &b);

            st.insert({ a, b });
        }

        for (auto [x, y] : st) {
            printf("%d %d\n", x, y);
        }
    }

    return 0;
}