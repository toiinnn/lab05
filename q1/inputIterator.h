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

/**
 * @brief      Essa função recebe um intervalo especificado por dois iteradores,
 * 			   na qual os valores deverão ser somados e o retorno deve ser o valor mais pŕoximo
 * 			   da média possível.
 *
 * @param[in]  first          The first value of interval
 * @param[in]  last           The last value of interval
 *
 * @tparam     InputIterator  Template
 *
 * @return     The closest value of mean
 */
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