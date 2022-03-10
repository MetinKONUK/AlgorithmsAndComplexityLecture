#include<iostream>
#include<vector>

int BinarySearch(std::vector<int> nums, int left, int right, int key) {
	if (left > right) return -1;
	int middle = left + (right - left) / 2;
	if (nums[middle] == key) {
		std::cout << "Index: " << middle << std::endl;
		return key;
	}
	if (nums[middle] > key)
		return BinarySearch(nums, 0, middle - 1, key);
	return BinarySearch(nums, middle + 1, right, key);
}

// T(N) = O(LogN)