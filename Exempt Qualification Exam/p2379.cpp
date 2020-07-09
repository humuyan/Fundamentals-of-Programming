#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const int Maxn = 111;
struct Node {
	int cnt, dps;
} a[Maxn];
inline bool cmp(const Node &i, const Node &j) {
	return (i.cnt*j.dps < j.cnt*i.dps);
}

int T, n, dps;

int main() {
	cin >> T;
	while (T--) {
		cin >> n >> dps;
		LL tot = 0;
		for (int i = 1, hp; i <= n; ++i) {
			cin >> hp >> a[i].dps;
			a[i].cnt = round(ceil(hp/double(dps)));
			tot += a[i].dps;
		}
		sort(a+1, a+n+1, cmp);
		LL ans = 0;
		for (int i = 1; i <= n; ++i) {
			ans += tot*a[i].cnt;
			tot -= a[i].dps;
		}
		cout << ans << endl;
	}
	return 0;
}
