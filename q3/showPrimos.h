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


/**
 * @brief      Functor para verificar se um número é primo
 */
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




/**
 * @brief      Recebe um numero inteiro positivo para verificação e impressão
 * 			   dos numeros primos do 1 até ele. O processo se dá com o uso da função
 * 			   iota, que recebe um intervalo dado por dois iteradores, e adiciona esse
 * 			   valor no terceiro parametro. Logo após vem a verificacao se um numero eh
 * 			   primo ou não com o auxilio do functor eh primo, adicional a função find_if
 * 			   da biblioteca algorithm.
 * 		        
 *			    
 *
 * @param[in]  numero  Um numero inteiro positivo
 */
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