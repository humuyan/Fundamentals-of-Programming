#include <bits/stdc++.h>
using namespace std;

int n, a[111];

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	for (int i = 0, mina, pos; i < n; ++i) {
		mina = INT_MAX;
		for (int j = i; j < n; ++j) {
			if (a[j] < mina) {
				mina = a[j], pos = j;
			}
		}
		swap(a[i], a[pos]);
		printf("swap(a[%d], a[%d]):", i, pos);
		for (int j = 0; j < n; ++j) {
			printf("%d%c", a[j], " \n"[j == n-1]);
		}
	}
	return 0;
}
