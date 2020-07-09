#include <bits/stdc++.h>
using namespace std;

int n, x, y, dp[111];

int main() {
	scanf("%d%d%d", &n, &x, &y);
	dp[0] = 1;
	for (int i = 1; i <= n; ++i) {
		if (i >= x) {
			dp[i] = dp[i-x];
		}
		if (i >= y && x != y) {
			dp[i] += dp[i-y];
		}
	}
	if (!dp[n]) {
		puts("sorry");
	} else {
		printf("%d\n", dp[n]);
	}
	return 0;
}
