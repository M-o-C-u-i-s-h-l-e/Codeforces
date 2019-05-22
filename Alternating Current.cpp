#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;
	stack<char> st;
	for (int i = 0; i < str.size(); i++) {
		if (st.empty()) {
			st.push(str[i]);
		} else {
			if (st.top() == str[i]) {
				st.pop();
			} else {
				st.push(str[i]);
			}
		}
	}
	(st.empty()) ? cout << "Yes\n" : cout << "No\n";
}
