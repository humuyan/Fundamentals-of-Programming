#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const int Maxn = 4555;
struct Node {
	int left, right, bottom, top, front, back, delta;
} a[Maxn];

int T, n;

inline LL cross(int l0, int r0, int l1, int r1) {
	if (l0 > l1) {
		swap(l0, l1), swap(r0, r1);
	}
	return max(0, min(r1, r0) - l1 + 1);
}

int main() {
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		int cur = 0;
		for (int i = 1; i <= n; ++i) {
			char op[11];
			scanf("%s", op);
			if (*op == 'D') {
				++cur;
				scanf("%d%d%d%d%d%d%d", &a[cur].delta, &a[cur].left, &a[cur].right, &a[cur].bottom, &a[cur].top, &a[cur].front, &a[cur].back);
			} else {
				int left, right, bottom, top, front, back;
				scanf("%d%d%d%d%d%d", &left, &right, &bottom, &top, &front, &back);
				LL ans = 0;
				for (int j = 1; j <= cur; ++j) {
					ans += a[j].delta * cross(left, right, a[j].left, a[j].right) * cross(bottom, top, a[j].bottom, a[j].top) * cross(front, back, a[j].front, a[j].back);
				}
				printf("%lld\n", ans);
			}
		}
	}
	return 0;
}
