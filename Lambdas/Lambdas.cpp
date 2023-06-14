#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using std::string;
using std::vector;

int main()
{
	auto isOdd = [](int candidate) {return candidate % 2 != 0;};
	bool is3Odd = isOdd(3);
	bool is4Odd = isOdd(4);

	vector<int> nums{ 2, 3, 4, -1, 1 };
	int odds = std::count_if(begin(nums), end(nums), isOdd);
	int evens = std::count_if(begin(nums), end(nums), [](int candiate) {return candiate % 2 == 0;});

	//capturing by value and ref
	int x = 3;
	int y = 7;
	string message = "elements between ";
	message += s
}
