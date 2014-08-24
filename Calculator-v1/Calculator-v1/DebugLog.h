#include <iostream>
#include <string>

class DebugLog
{

public:
	DebugLog() {};
	void D_Log(const char* msg);

private:
	char m_sMsg;
};

void DebugLog::D_Log(const char* msg)
{
	const char* dbugMsg = ("DEBUG: %s", msg);
	printf_s(dbugMsg);
}