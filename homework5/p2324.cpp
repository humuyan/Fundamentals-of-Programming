#include <bits/stdc++.h>
using namespace std;

int main() {
	bool survive[10];
	memset(survive, true, sizeof(survive));
	for (int i = 1, cur = 0; i <= 9; ++i) {
		for (int j = 1; j <= 6; ++j) {
			for (; !survive[cur]; cur = (cur+1)%10) {}
			if (j == 6) {
				survive[cur] = false;
			} else {
				cur = (cur+1)%10;
			}
		}
	}
	for (int i = 0; i < 10; ++i) {
		if (survive[i]) {
			printf("%d\n", i+1);
		}
	}
	return 0;
}
