// =========================================================
// Object file includes
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"

// =========================================================
// STL includes
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Instantiation of aritmetic operation objects 
Addition add         = Addition();
Subtraction sub      = Subtraction();
Multiplication multi = Multiplication();
Division division	 = Division();


class OrderOfOperation
{

public:
	OrderOfOperation() {};
	OrderOfOperation(vector<char> arr) { m_CharArray = arr; }
	OrderOfOperation(string charString) { m_sCharacterString = charString; }

	void determinOrderOfOperations(vector<char> m_CharArray);

	double sendAdditioncomponent(double x, double y);
	double sendSubtractionComponent(double x, double y);
	double sendMultiplicationComponent(double x, double y);
	double sendDivisionComponent(double x, double y);

	double returnResult();

private:
	vector<char> m_CharArray;
	double		 m_dResult;
	string		 m_sCharacterString;

};

void OrderOfOperation::determinOrderOfOperations(vector<char> m_CharArray)
{
	/*
	* Perform logic to determin order of operations then call
	* related object to perform type of operations determined by the 
	* string operator which was passed in.
	*/
}

double OrderOfOperation::sendAdditioncomponent(double x, double y)
{
	double result = add.performAddition(x, y);
	return result;
}

double OrderOfOperation::sendSubtractionComponent(double x, double y)
{
	double result = sub.performSubtraction(x, y);
	return result;
}

double OrderOfOperation::sendMultiplicationComponent(double x, double y)
{
	double result = multi.performMultiplication(x, y);
	return result;
}

double OrderOfOperation::sendDivisionComponent(double x, double y)
{
	double result = division.performDivision(x, y);
	return result;
}

double OrderOfOperation::returnResult()
{
	return 1;
}