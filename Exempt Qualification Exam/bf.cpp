#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const int Max = 1111111;
struct Node {
	int x, y;
} a[Max], b[Max];

int T, n, m, p[Max];

int getint() {
	int c = getchar(), ret = 0;
	while (!isdigit(c)) {
		c = getchar();
	}
	do {
		ret = ret*10+c-48;
		c = getchar();
	} while (isdigit(c));
	return ret;
}

int main() {
	T = getint();
	while (T--) {
		n = getint(), m = getint();
		srand(time(NULL)^m);
		for (int i = 1; i <= n; ++i) {
			a[i].x = getint(), a[i].y = getint();
		}
		for (int i = 1; i <= m; ++i) {
			b[i].x = getint(), b[i].y = getint();
			p[i] = i;
		}
		random_shuffle(p+1, p+m+1);
		m = min(m, 6000);
		LL ans = LLONG_MAX;
		for (int i = 1; i <= m; ++i) {
			LL cur = 0;
			for (int j = 1; j <= n; ++j) {
				cur += max(abs(b[p[i]].x-a[j].x), abs(b[p[i]].y-a[j].y));
			}
			ans = min(ans, cur);
		}
		printf("%lld\n", ans);
	}
	return 0;
}
