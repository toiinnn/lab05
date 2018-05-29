#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <algorithm>
using std::count;

#include <cmath>
using std::abs;

#include <iterator>
using std::distance;

#include <numeric>
using std::accumulate;

template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last)
{	
	
	float media = accumulate(first, last, 0.0) / (distance(first, last));
	auto maisProximo = first;

	for (auto i = first+1; i != last; ++i)
	{
		if(abs(media - *i) < abs(media - *maisProximo))
			maisProximo = i;
	}
	return maisProximo;
}

int main()
{
	vector<int> v { 1, 2, 3, 30, 40, 50 };
	auto result = closest2mean(v.begin(), v.end());
	cout << (*result) << endl;
	return 0;
}