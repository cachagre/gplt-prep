#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> s(100);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    string dummy;
    getline(cin, dummy); // Clear the newline character

    string text = "";
    getline(cin, text);

    string result;
    int count = 0;

    for (size_t i = 0; i < text.size(); i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (text.substr(i, s[j].size()) == s[j]) {
                count++;
                result += "<censored>";
                i += s[j].size() - 1;
                found = true;
                break;
            }
        }
        if (!found) {
            result += text[i];
        }
    }

    cout << count << endl;
    cout << result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}
