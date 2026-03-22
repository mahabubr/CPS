#include<bits/stdc++.h>

using namespace std;


int main() {
    long long t;

    cin >> t;

    while (t--) {
        long long n;

        cin >> n;

        multiset<long long> st;

        while (n--) {
            long long x;

            cin >> x;

            st.insert(x);
        }

        long long ans = 0;

        while (st.size() >= 2) {
            auto it1 = st.begin();
            auto it2 = next(st.begin());

            long long sum = *it1 + *it2;

            ans += sum;

            st.erase(it1);
            st.erase(it2);

            st.insert(sum);
        }

        cout << ans << endl;
    }

    return 0;
}