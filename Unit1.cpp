//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Szukaj.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "LMDCustomComponent"
#pragma link "LMDGlobalHotKey"
#pragma resource "*.dfm"

TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner): TForm(Owner)
{
}

//---------------------------------------------------------------------------
void __fastcall TForm1::FormActivate(TObject *Sender)
{
 WindowState = wsMaximized;

 PokazWszystko();
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Koniec1Click(TObject *Sender)
{
 Close();
}

//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
 CB_Szukaj1->ItemIndex=0;
 L_Wyniki1->Visible=false;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::PokazWszystko()
{
  //zapytanie
  String query = "SELECT artykul.id_artykulu,artykul.nazwa,artykul.nazwa2,artykul.stan,jednostka.skrot,magazyn.nazwa MAGAZYN,artykul.indeks_katalogowy,artykul.uwagi,artykul.ostrzezenie FROM artykul,jednostka,magazyn WHERE (artykul.id_jednostki=jednostka.id_jednostki AND artykul.id_magazynu=magazyn.id_magazynu)";

  Query->Close();
  Query->SQL->Clear();
  Query->SQL->Add(query);
  Query->Open();

  //wyzeruj
  FormSzukaj->E_Szukaj->Text="";
  L_Wyniki1->Visible=false;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Szukaj(String text_tofind)
{
   String pole;

   switch(CB_Szukaj1->ItemIndex)
   {
    case 0: pole="artykul.nazwa LIKE '%"+text_tofind+"%'"; break;
    case 1: pole="(artykul.nazwa LIKE '%"+text_tofind+"%' OR artykul.nazwa2 LIKE '%"+text_tofind+"%')"; break;
    case 2: pole="artykul.indeks_katalogowy LIKE '%"+text_tofind+"%'"; break;
   }

   //zapytanie
   String query = "SELECT artykul.id_artykulu,artykul.nazwa,artykul.nazwa2,artykul.stan,jednostka.skrot,magazyn.nazwa MAGAZYN,artykul.indeks_katalogowy,artykul.uwagi,artykul.ostrzezenie FROM artykul,jednostka,magazyn WHERE ("+pole+" AND artykul.id_jednostki=jednostka.id_jednostki AND artykul.id_magazynu=magazyn.id_magazynu)";
   
   try
   {
    Query->Close();
    Query->SQL->Clear();
    Query->SQL->Add(query);
    Query->Open();
   }
   catch(Exception &e)
   {
   }

   //poka¿ etykietê
   L_Wyniki1->Visible=true;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::B_Szukaj1Click(TObject *Sender)
{
  FormSzukaj->E_Szukaj->Text="";
  FormSzukaj->ShowModal();
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Pokawszystko1Click(TObject *Sender)
{
  PokazWszystko();
}

//---------------------------------------------------------------------------
void __fastcall TForm1::DBGridKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)
{
 //CTRL+C
 if(GetKeyState(VK_CONTROL)&0x80 && GetKeyState('C')&0x80)
 {
   TClipboard * schowek = new TClipboard();

    schowek->SetTextBuf(DBGrid->SelectedField->DisplayText.c_str());

   delete schowek;
 }
}
//---------------------------------------------------------------------------


