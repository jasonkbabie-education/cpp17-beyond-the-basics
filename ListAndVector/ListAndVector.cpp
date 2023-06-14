#include <iostream>
#include <chrono>
using std::chrono::system_clock;
using std::chrono::steady_clock;
using std::chrono::duration_cast;
using std::chrono::seconds;
using std::chrono::milliseconds;

#include <vector>
#include <list>
using std::vector;
using std::list;


template <typename Func>
long long TimeFunc(Func f) {
	auto begin = steady_clock::now();
	f();
	auto end = steady_clock::now();
	return duration_cast<milliseconds>(end - begin).count();
}

void BuildVector(int const& size, vector<int>& v) {
	for (int i = 0; i < size; i++)
	{
		int r = (int)rand();
		bool inserted = false;
		for (auto it = begin(v); it != end(v); it++)
		{
			if (*it > r)
			{
				v.insert(it, r);
				inserted = true;
				break;
			}
		}
		if (!inserted)
			v.push_back(r);
	}
}

void BuildList(int const& size, list<int>& v) {
	for (int i = 0; i < size; i++)
	{
		int r = (int)rand();
		bool inserted = false;
		for (auto it = begin(v); it != end(v); it++)
		{
			if (*it > r)
			{
				v.insert(it, r);
				inserted = true;
				break;
			}
		}
		if (!inserted)
			v.push_back(r);
	}
}

int main()
{

}
