#include<bits/stdc++.h>

using namespace std;

int main() {

    string line;

    while (getline(cin, line)) {
        if (line == "#") break;

        set<string> st;

        stringstream ss(line);

        string word;

        while (ss >> word) {
            st.insert(word);
        }

        cout << st.size() << endl;
    }

    return 0;
}