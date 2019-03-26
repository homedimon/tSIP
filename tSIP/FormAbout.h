/** \brief "About program" window header file
*/

//----------------------------------------------------------------------------
#ifndef FormAboutH
#define FormAboutH
//----------------------------------------------------------------------------
#include <vcl\System.hpp>
#include <vcl\Windows.hpp>
#include <vcl\SysUtils.hpp>
#include <vcl\Classes.hpp>
#include <vcl\Graphics.hpp>
#include <vcl\Forms.hpp>
#include <vcl\Controls.hpp>
#include <vcl\StdCtrls.hpp>
#include <vcl\Buttons.hpp>
#include <vcl\ExtCtrls.hpp>
//----------------------------------------------------------------------------
class TfrmAbout : public TForm
{
__published:
	TPanel *Panel1;
	TImage *ProgramIcon;
	TLabel *ProductName;
	TButton *OKButton;
	TLabel *lblVersion;
	TLabel *lblInfo1;
	TLabel *lblInfo2;
	TLabel *lblInfo3;
	TLabel *lblBuilt;
	TLabel *lblBuildTimestamp;
	TMemo *Memo;
	TLabel *lblBaresipLicense;
	TLabel *lblCodeguard;
	TLabel *lblCodeGuardState;
	TLabel *lblDebug;
	TLabel *lblDebugState;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *lblExeLocation;
	TLabel *lblLocation;
	TLabel *lblProfileDir;
	TLabel *lblProfileDirLocation;
	void __fastcall lblInfo2Click(TObject *Sender);
	void __fastcall lblCodeGuardStateClick(TObject *Sender);
	void __fastcall lblExeLocationClick(TObject *Sender);
	void __fastcall FormKeyPress(TObject *Sender, char &Key);
	void __fastcall lblProfileDirLocationClick(TObject *Sender);
private:
public:
	virtual __fastcall TfrmAbout(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TfrmAbout *frmAbout;
//----------------------------------------------------------------------------
#endif
