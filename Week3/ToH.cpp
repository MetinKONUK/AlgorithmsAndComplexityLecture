#include <iostream>
void ToH(int n, char source, char target, char aux) {
	if (n == 0) return;
	ToH(n - 1, source, aux, target);
	std::cout << "Move " << n
		<< " From " << source
		<< " To " << target << std::endl;
	ToH(n - 1, aux, target, source);
}

// T(N) = 2^N - 1 = O(2^N)