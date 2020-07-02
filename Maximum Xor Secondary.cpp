#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
 
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
 
	int n;
	long long Max = 0;
	cin >> n;
	stack<long long> st;
	for (long long i = 0, x; i < n; i++) {
		cin >> x;
		while (!st.empty()) {
			long long temp = st.top();
			Max = max(Max, temp ^ x);
			if (temp > x)
				break;
			st.pop();
		}
		st.push(x);
	}
	cout << Max << endl;
}
