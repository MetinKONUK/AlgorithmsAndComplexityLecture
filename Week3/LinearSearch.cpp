#include<vector>
#include<iostream>
int LinearSearch(std::vector<int> nums, int n, int key) {
	if (n < 0) return -1;
	if (nums[n] == key) {
		std::cout << "Index: " << n << std::endl;
		return key;
	};

	return LinearSearch(nums, n - 1, key);
};