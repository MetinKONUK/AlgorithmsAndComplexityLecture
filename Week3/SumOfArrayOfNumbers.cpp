#include<vector>
int SumOfArrayOfNNumbers(std::vector<int> nums, int i) {
	if (i == -1) {
		return 0;
	}
	if (i == 0) {
		return nums[i];
	}
	return nums[i] + SumOfArrayOfNNumbers(nums, i - 1);
};
// T(N) = O(N)
// S(N) = O(N)


int SumOfArrayOfNNumbersDivideByTwo(std::vector<int> nums, int left, int right) {
	if (left > right) return 0;
	if (left == right) return nums[left];
	int middle = left + (right - left) / 2;
	return SumOfArrayOfNNumbersDivideByTwo(nums, left, middle) + SumOfArrayOfNNumbersDivideByTwo(nums, middle + 1, right);
};

// T(N) = O(logN)
// S(N) = O(N)