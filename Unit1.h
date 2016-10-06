//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *StringGrid1;
	TStringGrid *StringGrid2;
	TStringGrid *StringGrid3;
	TStringGrid *StringGrid4;
	TStringGrid *StringGrid5;
	TStringGrid *StringGrid6;
	TStringGrid *StringGrid7;
	TButton *Button1;
	TButton *Button2;
	TStringGrid *StringGrid8;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *N7;
	TMenuItem *N8;
	TMenuItem *N9;
	TMenuItem *N10;
	TButton *Button3;
	TButton *Button4;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall StringGrid1DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State);
	void __fastcall StringGrid1SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall StringGrid2DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
		  TGridDrawState State);
	void __fastcall StringGrid2SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall StringGrid3DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State);
	void __fastcall StringGrid3SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall StringGrid4DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State);
	void __fastcall StringGrid4SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall StringGrid5DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State);
	void __fastcall StringGrid5SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall StringGrid6DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State);
	void __fastcall StringGrid6SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall StringGrid7DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State);
	void __fastcall StringGrid7SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall StringGrid8DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall StringGrid8SelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall N10Click(TObject *Sender);
	void __fastcall N2Click(TObject *Sender);

	 /*
     const int neuronCount = 100;
const int cont = 10;
int drawing1 [cont][cont],
	drawing2 [cont][cont],
	drawing3 [cont][cont],
	drawing4 [cont][cont],
	drawing5 [cont][cont],
	drawing6 [cont][cont],
	drawing7 [cont][cont],
	drawing8 [cont][cont];
int
	character_1[cont][cont],
	character_2[cont][cont],
	character_3[cont][cont],
	character_4[cont][cont],
	character_5[cont][cont],
	character_6[cont][cont],
	character_7[cont][cont],
	character_8[cont][cont],

	//�����
	b1[neuronCount],
	b2[neuronCount],
	b3[neuronCount],
	b4[neuronCount],
	b5[neuronCount],
	b6[neuronCount] ,

	isp_obraz[neuronCount],
	vosstanov[neuronCount];

	int matrix_result1[neuronCount][neuronCount];
	int matrix_result2[neuronCount][neuronCount] ;
	int matrix_result3[neuronCount][neuronCount] = {0};
	int matrix_result4[neuronCount][neuronCount] = {0};
	int matrix_result5[neuronCount][neuronCount] = {0};
	int matrix_result6[neuronCount][neuronCount] = {0};

	int matrix_W[neuronCount][neuronCount] = {0};
	int resultVector[neuronCount] = {0};
										 */





private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
