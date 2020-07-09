#include <bits/stdc++.h>
using namespace std;

const double Pi = acos(-1);

inline double sqr(const double &a) {
	return a*a;
}

int main() {
	printf("%.5lf\n", sqr(sin(Pi/4.0))+sin(Pi/4.0)*cos(Pi/4.0)-sqr(cos(Pi/4.0)));
	return 0;
}
