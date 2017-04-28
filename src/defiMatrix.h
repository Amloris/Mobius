/* defiMatrix
The defiMatrix class is for a full matrix. It stores the numbers
of rows and columns and all the coefficients of the matrix.
Best used for dense matrices.
*/

#ifndef defiMatrix_h
#define defiMatrix_h

#include <iostream>
using namespace std;

class defiMatrix {	
private:
	double **m_coeff;		                     //Coefficients of the matrix
	int m_nr, m_nc;                              //Number of columns and rows

	defiMatrix();	                             //Never to be used constructors
	defiMatrix(const defiMatrix &matrix);
public:
	//Constructors
	defiMatrix(int nr, int nc);               	 //Construct a nr by nc matrix
	//Destructor
	~defiMatrix();

	// Functions
	void zero();		                         //Initialize all coefficients of the matrix to zero
	int getNumRows() const;	                     //Return m_nr;
	int getNumCols() const;	                     //Return m_nc;
	void print() const;	                         //Print useful info;
	void setCoeff(int i, int j, double value);	 //Set m_coeff[i][j] = value;
	void addCoeff(int i, int j, double value);	 //Add value to m_coeff[i][j]
	double getCoeff(int i, int j);	             //Return m_coeff[i][j];
};

//Functions
//-----------------------------------------------------------------------------
defiMatrix::defiMatrix()  { cout << "Creating defiMatrix Class Object" << endl; }
defiMatrix::~defiMatrix() 
{ 
	//Deallocate Memory
	for (int i = 0; i < m_nr; i++)
	{
		delete[] m_coeff[i];
	}
	delete[] m_coeff;

	cout << "Deleting defiMatrix Class Object" << endl; 
}
defiMatrix::defiMatrix(int nr, int nc)
{
	//Load Data
	m_nr = nr;
	m_nc = nc;

	//Dynamically Allocate Memory
	m_coeff = new double *[nr];
	for (int i = 0; i < nr; i++)
	{
		m_coeff[i] = new double[nc];
	}
}

int defiMatrix::getNumRows() const
{
	return m_nr;
}

int defiMatrix::getNumCols() const
{
	return m_nc;
}

void defiMatrix::setCoeff(int i, int j, double value)	 
{
	m_coeff[i][j] = value;             //Set m_coeff[i][j] = value;
}

double defiMatrix::getCoeff(int i, int j)	             
{
	return m_coeff[i][j];              //Return m_coeff[i][j];
}

void defiMatrix::addCoeff(int i, int j, double value)	 
{
	m_coeff[i][j] += value;            //Add value to m_coeff[i][j]
}

void defiMatrix::zero()
{
	for (int i = 0; i < m_nr; i++)
	{
		for (int j = 0; j < m_nc; j++)
		{
			m_coeff[i][j] = 0;
		}
	}
}

void defiMatrix::print() const
{
	cout << "Matrix: " << m_nr << "x" << m_nc << endl;
	for (int i = 0; i < m_nr; i++)
	{
		for (int j = 0; j < m_nc; j++)
		{
			cout << m_coeff[i][j] << "    ";
		}
		cout << endl;
	}
	cout << endl;
}

#endif