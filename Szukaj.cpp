//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Szukaj.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "LMDBaseControl"
#pragma link "LMDBaseGraphicControl"
#pragma link "LMDBaseLabel"
#pragma link "LMDControl"
#pragma link "LMDCustomSimpleLabel"
#pragma link "LMDSimpleLabel"
#pragma link "LMDBaseEdit"
#pragma link "LMDButton"
#pragma link "LMDCustomBevelPanel"
#pragma link "LMDCustomButton"
#pragma link "LMDCustomControl"
#pragma link "LMDCustomEdit"
#pragma link "LMDCustomPanel"
#pragma link "LMDEdit"
#pragma link "LMDCustomComponent"
#pragma link "LMDGlobalHotKey"
#pragma resource "*.dfm"

TFormSzukaj *FormSzukaj;

//---------------------------------------------------------------------------
__fastcall TFormSzukaj::TFormSzukaj(TComponent* Owner): TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TFormSzukaj::B_OkClick(TObject *Sender)
{
 Close();        
}

//---------------------------------------------------------------------------
void __fastcall TFormSzukaj::FormActivate(TObject *Sender)
{
 E_Szukaj->SetFocus();

 GlobalHotKey->HotKey = VK_ESCAPE;
 GlobalHotKey->Active = true;

}

//---------------------------------------------------------------------------
void __fastcall TFormSzukaj::E_SzukajKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
 if(Key==VK_RETURN)
         B_Ok->Click();
}

//---------------------------------------------------------------------------
void __fastcall TFormSzukaj::E_SzukajChange(TObject *Sender)
{
 if(Visible)
        Form1->Szukaj(E_Szukaj->Text);
}
//---------------------------------------------------------------------------

void __fastcall TFormSzukaj::FormClose(TObject *Sender, TCloseAction &Action)
{
 GlobalHotKey->Active = false;        
}
//---------------------------------------------------------------------------

void __fastcall TFormSzukaj::GlobalHotKeyKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
 B_Ok->Click();        
}
//---------------------------------------------------------------------------

