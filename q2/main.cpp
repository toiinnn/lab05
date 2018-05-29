#include "printElements.h"

int main(int argc, char const *argv[]) 
{
	/*Usando o container set:*/
	set<int> numeros;
	numeros.insert(3);
	numeros.insert(1);
	numeros.insert(4);
	numeros.insert(1);
	numeros.insert(2);
	numeros.insert(5);
	print_elements(numeros, "Set: ");
	print_elements(numeros, "CSV Set: ", ';');

	/*Usando o container vector:*/
	vector<int> v(10);
	print_elements(v, "Vector: ");
	print_elements(v, "Vector: ", '*');

	return 0;
}