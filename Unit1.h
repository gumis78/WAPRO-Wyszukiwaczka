//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include "LMDCustomComponent.hpp"
#include "LMDGlobalHotKey.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:
                // IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Koniec1;
        TMenuItem *Pokawszystko1;
        TButton *B_Szukaj1;
        TComboBox *CB_Szukaj1;
        TLabel *L_Wyniki1;
        TDBGrid *DBGrid;
        TADOConnection *ADOConnection;
        TDataSource *DataSource;
        TADOQuery *Query;
        TLMDGlobalHotKey *GlobalHotKey;

        void __fastcall FormActivate(TObject *Sender);
        void __fastcall Koniec1Click(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall B_Szukaj1Click(TObject *Sender);
        void __fastcall Pokawszystko1Click(TObject *Sender);
        void __fastcall DBGridKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);

private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);

   void __fastcall PokazWszystko();
   void __fastcall Szukaj(String text_tofind);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
