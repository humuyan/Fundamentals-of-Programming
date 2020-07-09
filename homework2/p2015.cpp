#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double s = (a+b+c)/2.0;
	printf("%.2lf\n", sqrt(s*(s-a)*(s-b)*(s-c)));
	return 0;
}
