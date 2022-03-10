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