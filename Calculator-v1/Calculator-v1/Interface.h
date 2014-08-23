// =========================================================
// Application includes
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "OrderOfOperation.h"
#include "DebugLog.h"

// =========================================================
// STL includes
#include <vector>

using namespace std;

static DebugLog logger = DebugLog();

class UserInput
{
public:
	UserInput(string input) { m_sUserInput = input; }
	//~userInput();

protected:
	vector<char> StringBreakdown(string m_sUserInput)
	{
		vector<char> chars;
		int i = 0;
		while (i < m_sUserInput.max_size + 1)
		{
			chars.push_back(m_sUserInput[i]);
			/*const char* msg = "Printing single char: " + m_sUserInput[i];
			logger.D_Log(msg);*/
		}
	}

private:

	string m_sUserInput;

};


