#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[3] = {1, 2, 3};
	char ans[3];
	do {
		if ((a[1] > a[0]) + (a[0] == a[2]) == 3-a[0] && ((a[0] > a[1]) + (a[0] > a[2]) == 3-a[1]) && ((a[2] > a[1]) + (a[1] > a[0]) == 3-a[2])) {
			for (int i = 0; i < 3; ++i) {
				ans[a[i]-1] = 'A'+i;
			}
		}
	} while (next_permutation(a, a+3));
	for (int i = 0; i < 3; ++i) {
		printf("%c%c", ans[i], " \n"[i == 2]);
	}
	return 0;
}
