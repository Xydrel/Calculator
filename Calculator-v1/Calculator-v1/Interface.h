// =========================================================
// Object file includes
#include "OrderOfOperation.h"
#include "DebugLog.h"


static DebugLog logger = DebugLog();

class UserInput
{

// Member Functions
public:

	/*
	* Instantiate the object as well as start the method to 
	* perform the conversion from string to a character array.
	*/
	UserInput(string input) { 
		m_sUserInput = input;
		m_cArray = StringBreakdown(m_sUserInput);
	}

	~UserInput() {};


protected:
	vector<char> StringBreakdown(string m_sUserInput);
	double PerformArithmeticOperations(vector<char> m_cArary);


// Member properties
public:

	char m_CharArray;

private:

	string			m_sUserInput;
	vector<char>	m_cArray;

};

vector<char> UserInput::StringBreakdown(string m_sUserInput)
{
	vector<char> charVect(m_sUserInput.begin(), m_sUserInput.end());
	for (unsigned int i = 0; i < charVect.capacity(); ++i)
	{
		cout << charVect[i] << endl;
	}	
	return charVect;
}

double UserInput::PerformArithmeticOperations(vector<char> m_cArray)
{
	return 1.0;
}



