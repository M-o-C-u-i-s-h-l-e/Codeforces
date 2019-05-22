#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;
    int Max = 0, Count = 1, temp = 0;
    vector<int> v;
    v.push_back(-1);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(') {
            v.push_back(i);
        } else {
            if (v.size() > 1) {
                v.pop_back();
                temp = i - v[v.size()-1];
                if (temp > Max) {
                    Max = temp;
                    Count = 1;
                } else if (temp == Max) {
                    Count++;
                }
            } else {
                v[0] = i;
            }
        }
    }
    (Max) ? cout << Max << " " << Count << endl : cout << "0 1\n";
}
