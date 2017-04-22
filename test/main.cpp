//Tests the base matrix and vector class

#include "../src/defiMatrix.h"
#include "../src/defiVector.h"
#include <iostream>

using namespace std;

int main()
{
	defiMatrix A(4, 4);
	A.zero();
	A.print();

	defiVector X(4);
	X.zero();
	X.print();

	cout << "Hello World" << endl;

	getchar();

	return 0;
}