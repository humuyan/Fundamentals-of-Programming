#include <bits/stdc++.h>
using namespace std;

int n, a[111], x;

void print(const int &op, const int &len) {
	switch (op) {
		case 0: printf("  Init:"); break;
		case 1: printf("  Move back:"); break;
		case 2: printf("  Final:"); break;
	}
	for (int i = 1; i <= len; ++i) {
		printf("%d%c", a[i], " \n"[i == len]);
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 1, tmp, j; i <= n; ++i) {
		scanf("%d", &a[i]);
		printf("Insert element[%d]:\n", i);
		print(0, i);
		tmp = a[i];
		for (j = i-1; j >= 1 && a[j] > tmp; --j) {
			a[j+1] = a[j];
			print(1, i);
		}
		a[j+1] = tmp;
		print(2, i);
	}
	return 0;
}
