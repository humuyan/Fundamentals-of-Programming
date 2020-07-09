#include <bits/stdc++.h>
using namespace std;

string s;

bool ispalindrome(const string &st) {
	for (int i = 0, l = st.size(); i < l; ++i) {
		if (st[i] != st[l-i-1]) {
			return false;
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	while (getline(cin, s)) {
		cout << (ispalindrome(s) ? 'y' : 'n') << endl;
	}
	return 0;
}
