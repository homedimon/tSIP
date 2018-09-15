//---------------------------------------------------------------------------

#ifndef ProgrammableButtonsH
#define ProgrammableButtonsH
//---------------------------------------------------------------------------

#include "ButtonConf.h"
#include "UaConf.h"
#include <vector>
#include <Classes.hpp>

class ProgrammableButtons
{
private:
	AnsiString filename;
	int ReadFile(AnsiString name);
public:
	void SetFilename(AnsiString name)
	{
		filename = name;
	}
	int Read(void);
	int Write(void);

	enum { EXT_CONSOLE_COLUMNS = 12 };
	enum { CONSOLE_BTNS_PER_COLUMN = 15 };
	std::vector<ButtonConf> btnConf;

	void SetDefault(void);
	void UpdateContacts(std::vector<UaConf::Contact> &contacts);	
};

#endif
