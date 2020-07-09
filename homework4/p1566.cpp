#include <iostream>
#include <cmath>
using namespace std;
void printPrime(int num);    // 未定义，需要完成

int main() {
    int n, i;
    cin >> n;
    while (n --) {
        cin >> i;
        printPrime(i);
    }
    return 0;
}

#include <bits/stdc++.h>
bool isPrime(const int &x) {
	for (int i = 2; i*i <= x; ++i) {
		if (x%i == 0) {
			return false;
		}
	}
	return true;
}
void printPrime(int num) {
	printf("%d", num);
	bool printed = false;
	for (int i = 2; num != 1 && !isPrime(num); ++i) {
		if (isPrime(i)) {
			for (; num%i == 0; num /= i) {
				printf("%c%d", "=*"[printed], i);
				printed = true;
			}
		}
	}
	if (num != 1) {
		printf("%c%d", "=*"[printed], num);
	}
	putchar('\n');
}
