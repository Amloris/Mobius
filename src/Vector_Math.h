//Implements functions that use vectors exclusively.

#ifndef Vector_Math_h
#define Vector_Math_h

#include <math.h>
#include <iostream>
#include "defiVector.h"

using namespace std;

//Single Vector Operations
//-----------------------------------------------------------------------------
//Magnitude
double mag(defiVector &x)
{	//Returns the magnitude of the vector

	int len = x.getNumRows();

	double sum = 0;
	for (int i = 0; i < len; i++)
	{
		double temp = x.getCoeff(i);
		sum += temp*temp;
	}
	return sqrt(sum);
}

//Normalize
void normalize(defiVector &x)
{	//Returns the normalized vector of x

	int len = x.getNumRows();                    //Vector length
	defiVector y(len);
	double norm = mag(x);                        //Input vector magnitude

	if (norm == 0.0)
	{
		//return x;                                //Return the vector as is, it cannot be normalized
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			x.setCoeff(i, x.getCoeff(i) / norm);      //Normalize the vector
		}
		//return x;                                //Return the normalized vector
	}
}

//Math Operations





#endif
