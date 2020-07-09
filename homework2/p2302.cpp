#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a == 0) {
		puts("0.0000");
	} else {
		if (b >= c) {
			puts("-1");
		} else {
			printf("%.4lf\n", a/double(c-b));
		}
	}
	return 0;
}
