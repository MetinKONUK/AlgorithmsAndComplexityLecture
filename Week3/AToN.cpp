double Power(int a, int n) {
	if (n == 0) return 1;
	double res = Power(a, n / 2);
	if (!(n % 2)) {
		return res * res;
	}
	return a * res * res;
}

// T(N) = O(LogN)
// S(N) = O(N)