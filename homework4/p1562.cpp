#include <iostream>
using namespace std;
bool checkSpecial(int i, int n);      // 未定义，需要完成

int main() {
    int n;
    cin >> n;
    for (int i = 10000; i < 1000000; i ++) {
        if (checkSpecial(i, n)) {
            cout << i << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
bool checkSpecial(int i, int n) {
	char a[11], b[11];
	sprintf(a, "%d", i), sprintf(b, "%d", i);
	reverse(b, b+strlen(b));
	if (strcmp(a, b)) {
		return false;
	}
	int sum = 0;
	for (; i; sum += i%10, i /= 10) {}
	return (sum == n);
}
