#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const int Maxl = 22, Maxnum = 111;

int T, lucky, a[Maxl], power10[Maxl];
LL n, dp[Maxl][Maxnum][2][2][2];

LL calc(int len, int mod, bool app0, bool app1, bool limited) {
	if (len > *a) {
		return (app1 && mod == 0);
	}
	LL &cur = dp[len][mod][app0][app1][limited];
	if (cur == -1) {
		cur = 0;
		for (int i = 0, top = (limited ? a[len] : 9); i <= top; ++i) {
			cur += calc(len+1, (mod+power10[*a-len]*i)%lucky, (i == lucky/10), (app1 || (app0 && i == lucky%10)), (limited && i == top));
		}
	}
	return cur;
}

int main() {
	cin >> T;
	while (T--) {
		cin >> lucky >> n;
		*a = 0, power10[0] = 1;
		for (; n; n /= 10) {
			a[++*a] = n%10;
			power10[*a] = 10*power10[*a-1]%lucky;
		}
		reverse(a+1, a+*a+1);
		memset(dp, -1, sizeof(dp));
		cout << calc(1, 0, false, false, true) << endl;
	}
	return 0;
}
