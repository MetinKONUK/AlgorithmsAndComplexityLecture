#include<iostream>
#include<vector>
using namespace std;

int SumOfOneToN(int);
int SumOfArrayOfNNumbers(vector<int>, int);
int SumOfArrayOfNNumbersDivideByTwo(vector<int>, int, int);
double Power(int, int);
long long Fibonacci(int);
int LinearSearch(std::vector<int>, int, int);
int BinarySearch(vector<int>, int, int, int);
void ToH(int, char, char, char);

int main() {
	vector<int> A = { 1, 3, 4, 5, 5, 13 };
	//cout << SumOfOneToN(10) << endl;
	//cout << SumOfArrayOfNNumbers(A, A.size()-1) << endl;
	//cout << SumOfArrayOfNNumbersDivideByTwo(A, 0, A.size()-1) << endl;
	//cout << Power(3, 5) << endl;
	//cout << Fibonacci(5) << endl;
	//cout << LinearSearch(A, 0, 31) << endl;
	//cout << BinarySearch(A, 0, A.size()-1, 5) << endl;
	ToH(3, 'A', 'B', 'C');


	return 0;
}