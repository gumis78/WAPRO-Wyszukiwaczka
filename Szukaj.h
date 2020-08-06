//---------------------------------------------------------------------------

#ifndef SzukajH
#define SzukajH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "LMDBaseControl.hpp"
#include "LMDBaseGraphicControl.hpp"
#include "LMDBaseLabel.hpp"
#include "LMDControl.hpp"
#include "LMDCustomSimpleLabel.hpp"
#include "LMDSimpleLabel.hpp"
#include "LMDBaseEdit.hpp"
#include "LMDButton.hpp"
#include "LMDCustomBevelPanel.hpp"
#include "LMDCustomButton.hpp"
#include "LMDCustomControl.hpp"
#include "LMDCustomEdit.hpp"
#include "LMDCustomPanel.hpp"
#include "LMDEdit.hpp"
#include "LMDCustomComponent.hpp"
#include "LMDGlobalHotKey.hpp"
//---------------------------------------------------------------------------
class TFormSzukaj : public TForm
{
__published:	// IDE-managed Components
        TLMDSimpleLabel *Label;
        TLMDButton *B_Ok;
        TLMDGlobalHotKey *GlobalHotKey;
        TEdit *E_Szukaj;
        void __fastcall B_OkClick(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall E_SzukajKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall E_SzukajChange(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall GlobalHotKeyKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
private:	// User declarations
public:		// User declarations
        __fastcall TFormSzukaj(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSzukaj *FormSzukaj;
//---------------------------------------------------------------------------
#endif
