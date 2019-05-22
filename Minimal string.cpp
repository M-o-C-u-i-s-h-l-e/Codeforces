#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	cin >> str;
	vector<char> v(str.size() + 1);
	v[str.size()] = 'z';
	for (int i = str.size()-1; i >= 0; i--)
		v[i] = min(v[i+1], str[i]);
	int i = 0;
	stack<char> st;
	while (!st.empty() || i < str.size()) {
		if (!st.empty() && st.top() <= v[i]) {
			cout << st.top();
			st.pop();
		} else {
			st.push(str[i++]);
		}
	}
	cout << endl;
}
