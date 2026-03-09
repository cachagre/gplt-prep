#include <bits/stdc++.h>
using namespace std;

stack<char> st;

void solve() {
    string s;
    cin >> s;

    for (auto c : s) {
        if (c == ')') {
            string s2;
            while (true) {
                if (st.top() == '(') {
                    st.pop();
                    break;
                } else {
                    s2.push_back(st.top());
                    st.pop();
                }
            }
            reverse(s2.begin(), s2.end());
            cout << s2 << endl;
        } else {
            st.push(c);
        }
    }
}

int main() {
    solve();
}