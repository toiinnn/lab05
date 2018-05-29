#include "showPrimos.h"

int main(int argc, char const *argv[])
{
	if(argc != 2)
	{
		cerr << "Ops! Quantidade incorreta de parâmetros. O programa será encerrado." << endl;
		return 0;
	}

	stringstream tamNumero;

	tamNumero << *(argv+1);
	unsigned int numero;
	tamNumero >> numero;
	
	showPrimos(numero);
	return 0;
}