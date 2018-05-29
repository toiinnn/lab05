/**
 * @file    q4.cpp
 * @author  Silvio da Costa Sampaio
 * @author  Antonio Marcos Oliveira
 * @since   28/05/2018
 * @date    28/05/2018
 */
#include <iostream>
using std::cout;
using std::endl;

#include <iterator>
using std::back_inserter;

#include <vector>
using std::vector;

#include <algorithm>
using std::transform;

/**
 * @brief Essa função calcula o quadrado de um inteiro passado por parâmetro
 * @param val Um inteiro a ser elevado ao quadrado
 * @return O quadrado do número
 */
int square(int val) {
	return val * val;
}

int main(int argc, char* argv[]) 
{
	//criação de dois vetores dinâmicos com a classe vector	
	vector<int> col;
	vector<int> col2;
	
	//inserção de valores em col
	for (int i = 1; i <= 9; ++i) {
	col.push_back(i);
	}
	
	//O std::transform aplica uma determinada função passada por parametro em um intervalo determinado por iteradores
	//e o std::back_inserter serve para inserir elementos no final de um container x.
	//Logo, nesse caso o que está acontecendo aqui é: o transform está pegando todo o intervalo de col, e inserindo os valores
	//elevados ao quadrado (devido a função square e por estar usando o transform) no final do col2 (devido ao back_inserter).
	transform(col.begin(), col.end(), back_inserter(col2), square);
	
	//agora ele itera sobre os valores de col2, imprimindo seus valores
	for (vector<int>::iterator it = col2.begin(); it != col2.end(); ++it) {
		cout << (*it) << " ";
	}

	cout << endl;
	
	return 0;
}
