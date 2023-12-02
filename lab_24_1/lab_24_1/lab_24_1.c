#include <stdio.h>

long fuct(int n) {
	if (n == 0) {
		return 1;
	}
	long res = fuct(n - 1) * n;
	return res;
}

void main() {
	int n = 5;
	long f = fuct(n);
	printf("%d! = %1d", n, f);
}