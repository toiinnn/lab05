#ifndef PRINT_ELEMENTS_H
#define PRINT_ELEMENTS_H

#include <iostream>
using std::cout;
using std::endl;

#include <set>
using std::set;

template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="", const char separator= ' ')
{
	cout << label;
	for(auto i(collection.begin()); i != collection.end(); ++i)
		cout << *i << separator;
	cout << endl;
}

#endif /* PRINT_ELEMENTS_H */