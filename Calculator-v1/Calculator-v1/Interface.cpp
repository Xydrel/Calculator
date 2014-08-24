#include "Interface.h"

int main(void)
{	
	string userInput;
	cout << "Please enter an equation to calculate: ";
	cin >> userInput;
	cout << "The input was: " + userInput << endl;

	UserInput input = UserInput(userInput);
	
	stringTests(userInput);

	//runTests();
	//cout << "The result of: " << x << " + " << y << " = " << result << endl;

	cout << endl;
	system("PAUSE");
	return 0;
}

void runTests()
{
	//==========================================================================
	// Test Code

	double x = 20, y = 100;

	//double x, y;
	//cout << "Enter a number to add:";
	//cin >> x;
	//cout << "Enter the second number:";
	//cin >> y;
	double result;
	Addition add = Addition();
	result = add.performAddition(x, y);
	cout << "The result of: " << x << " + " << y << " = " << result << endl;

	Subtraction sub = Subtraction();
	result = sub.performSubtraction(x, y);
	cout << "The retults of: " << x << " - " << y << " = " << result << endl;

	Multiplication multi = Multiplication();
	result = multi.performMultiplication(x, y);
	cout << "The result of: " << x << " * " << y << " = " << result << endl;

	Division div = Division();
	result = div.performDivision(x, y);
	cout << "The result of: " << x << " / " << y << " = " << result << endl;

	//==========================================================================
}

void stringTests(string testString)
{
	//testString.
}