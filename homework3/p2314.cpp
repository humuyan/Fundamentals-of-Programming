#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0, tot = 0;
	for (int x; n--; ) {
		cin >> x;
		if (x < 1000 && (x%3 == 0 || x%5 == 0)) {
			ans += x, ++tot;
		}
		if (x == -1 || tot == 10) {
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
