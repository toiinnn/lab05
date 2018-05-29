#ifndef PRINT_ELEMENTS_H
#define PRINT_ELEMENTS_H

#include <iostream>
using std::cout;
using std::endl;

#include <set>
using std::set;

#include <vector>
using std::vector;

/**
 * @brief      Essa função recebe um container, seguido de um label e um separador, de modo que os elementos
 * 			   desse container sejam precedidos por uma mensagem recebida por parâmetro e cada elemento seja
 * 			   separado por um caractere específico, também recebido por parâmetro. Caso não seja passado
 * 			   nenhum separador, o espaço é o separador padrão
 *
 * @param[in]  collection  The collection
 * @param[in]  label       The label
 * @param[in]  separator   The separator
 *
 * @tparam     TContainer  Template para um container
 */
template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator= ' ')
{
	cout << label;
	for(auto i(collection.begin()); i != collection.end(); ++i)
		cout << *i << separator;
	cout << endl;
}

#endif /* PRINT_ELEMENTS_H */