int SumOfOneToN(int n) {
	if (n == 1) {
		return 1;
	}
	return n + SumOfOneToN(n - 1);
	// T(N) = O(N)
	// S(N) = O(N)
}