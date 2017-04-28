//Tests the base matrix and vector class

#include "../src/defiMatrix.h"
#include "../src/defiVector.h"
#include "../src/Vector_Math.h"
#include <iostream>

using namespace std;

int main()
{

	//Populate Matrix and Vector
	defiMatrix A(4, 4);
	A.zero();
	A.print();

	defiVector X(4);
	X.zero();
	X.setCoeff(0, 1.0);
	X.setCoeff(1, 2.0);
	X.setCoeff(2, 3.0);
	X.setCoeff(3, 4.0);
	X.print();

	//Check Vector Math
	double val = mag(X);
	cout << "X_mag = " << val << endl;


	cin.ignore();

	return 0;
}
