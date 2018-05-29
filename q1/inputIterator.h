#ifndef INPUT_ITERATOR_H
#define INPUT_ITERATOR_H

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

#endif /* INPUT_ITERATOR_H */