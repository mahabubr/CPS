#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    stack<int> st;

    while (n--) {
        int x;

        cin >> x;

        st.push(x);

        while (st.size() >= 2) {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            if (a == b) {
                st.push(a + 1);
            }
            else {
                st.push(b); st.push(a);
                break;
            }
        }
    }

    // while (!st.empty()) {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    cout << st.size() << endl;

    return 0;
}