#include "inputIterator.h"

int main()
{
	/*Um exemplo com inteiros*/
	vector<int> i { 1, 2, 3, 30, 40, 50 };
	auto result = closest2mean(i.begin(), i.end());
	cout << (*result) << endl;

	/*Um exemplo com floats*/
	vector<float> f { 11.4, 6.7, 3.96, 94.2, 40.7, 85.4};
	auto fResult = closest2mean(f.begin(), f.end());
	cout << (*fResult) << endl;

	return 0;
}