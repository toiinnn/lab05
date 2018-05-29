#ifndef MOSTRAR_PRIMOS_H
#define MOSTRAR_PRIMOS_H

#include <iostream>
using std::cout;
using std::endl;
using std::cerr;

#include <numeric>
using std::iota;

#include <algorithm>
using std::find_if;

#include <vector>
using std::vector;

#include <sstream>
using std::stringstream;


class ehPrimo
{
public:
	ehPrimo() {}	
	bool operator()(int n)const
	{
		for (int i = 2; i < n; ++i)
		{
			if(n % i == 0)
				return false;
		}
		return true;	
	}
};




void
showPrimos(unsigned int numero)
{
	vector<int> numeros(numero);
	iota(numeros.begin(), numeros.end(), 1);
	auto numPrimoAtual = begin(numeros);
	cout << "Numeros primos: [1-" << numero << "]:";
	while(numPrimoAtual < numeros.end())
	{
		numPrimoAtual = find_if(numPrimoAtual, numeros.end(), ehPrimo());
		if(numPrimoAtual < numeros.end())
			cout << *numPrimoAtual << " ";
		++numPrimoAtual;
	}
	cout << endl;
}

#endif /* MOSTRAR_PRIMOS_H */