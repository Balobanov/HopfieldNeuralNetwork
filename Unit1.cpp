//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "variables.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;





//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}


void __fastcall TForm1::Button1Click(TObject *Sender)
{

//N10->Enabled = true;
// ������� ������� � ������

for (int i = 0; i < neuronCount; i++)
	for (int j = 0; j < neuronCount; j++)
		matrix_W[i][j] = 0;


int dswdw = 0;
for (int i = 0; i < cont; i++)
			{
				for (int j = 0; j < cont; j++)
				{

					 b1[dswdw] = character_1[j][i];
					 b2[dswdw] = character_2[j][i];
					 b3[dswdw] = character_3[j][i];
					 b4[dswdw] = character_4[j][i];
					 b5[dswdw] = character_5[j][i];
					 b6[dswdw] = character_6[j][i];
					 isp_obraz[dswdw] = character_7[j][i];
					 dswdw++;
				}
			}

// ������ ������ ����.
   for (int i = 0; i < neuronCount; i++)
			{
				for (int j = 0; j < neuronCount; j++)
				{
					matrix_result1[j][i] = b1[j] * b1[i];
					matrix_result2[j][i] = b2[j] * b2[i];
					matrix_result3[j][i] = b3[j] * b3[i];
					matrix_result4[j][i] = b4[j] * b4[i];
					matrix_result5[j][i] = b5[j] * b5[i];
					matrix_result6[j][i] = b6[j] * b6[i];
                }
			}

	//*****************
	// ��������
	//*****************
	for (int i = 0; i < neuronCount; i++)
            {
                for (int j = 0; j < neuronCount; j++)
                {

                    if (i != j)
                    {
                        matrix_W[i][j] += matrix_result1[i][j];
                    }
                    else
                    {
                       //�������� ���������
                        matrix_W[i][j] = 0;
                    }
                }
	  }

	  for (int i = 0; i < neuronCount; i++)
            {
                for (int j = 0; j < neuronCount; j++)
                {

                    if (i != j)
                    {
                        matrix_W[i][j] += matrix_result2[i][j];
                    }
                    else
                    {
                       //�������� ���������
                        matrix_W[i][j] = 0;
                    }
                }
	  }


	  for (int i = 0; i < neuronCount; i++)
            {
                for (int j = 0; j < neuronCount; j++)
                {

                    if (i != j)
                    {
                        matrix_W[i][j] += matrix_result3[i][j];
                    }
                    else
                    {
                       //�������� ���������
                        matrix_W[i][j] = 0;
                    }
                }
	  }


	  for (int i = 0; i < neuronCount; i++)
            {
                for (int j = 0; j < neuronCount; j++)
                {

                    if (i != j)
                    {
						matrix_W[i][j] += matrix_result4[i][j];
                    }
                    else
                    {
                       //�������� ���������
                        matrix_W[i][j] = 0;
                    }
				}
	  }

	  for (int i = 0; i < neuronCount; i++)
            {
                for (int j = 0; j < neuronCount; j++)
                {

                    if (i != j)
                    {
						matrix_W[i][j] += matrix_result5[i][j];
                    }
                    else
                    {
                       //�������� ���������
                        matrix_W[i][j] = 0;
                    }
                }
	  }


	  for (int i = 0; i < neuronCount; i++)
            {
                for (int j = 0; j < neuronCount; j++)
                {

                    if (i != j)
                    {
                        matrix_W[i][j] += matrix_result6[i][j];
                    }
                    else
                    {
                       //�������� ���������
                        matrix_W[i][j] = 0;
                    }
                }
	  }



}
//---------------------------------------------------------------------------


void __fastcall TForm1::StringGrid1DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State)
{

	character_1[ACol][ARow] = 1;

	if (drawing1[ACol][ARow])
	{
		StringGrid1->Canvas->Brush->Color = RGB(255, 222, 173);
		StringGrid1->Canvas->Rectangle(Rect);

		character_1[ACol][ARow] = -1;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid1SelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
	drawing1[ACol][ARow]=!drawing1[ACol][ARow];

	if(character_1[ACol][ARow] == -1)
		character_1[ACol][ARow] = 1;
}
//---------------------------------------------------------------------------








void __fastcall TForm1::StringGrid2DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State)
{
	character_2[ACol][ARow] = 1;

	if (drawing2[ACol][ARow])
	{
		StringGrid2->Canvas->Brush->Color = RGB(255, 222, 173);
		StringGrid2->Canvas->Rectangle(Rect);

		character_2[ACol][ARow] = -1;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid2SelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
	drawing2[ACol][ARow]=!drawing2[ACol][ARow];

	if(character_2[ACol][ARow] == -1)
		character_2[ACol][ARow] = 1;
}
//---------------------------------------------------------------------------







void __fastcall TForm1::StringGrid3DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State)
{
	character_3[ACol][ARow] = 1;

	if (drawing3[ACol][ARow])
	{
		StringGrid3->Canvas->Brush->Color = RGB(255, 222, 173);
		StringGrid3->Canvas->Rectangle(Rect);

		character_3[ACol][ARow] = -1;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid3SelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
	drawing3[ACol][ARow]=!drawing3[ACol][ARow];

	if(character_3[ACol][ARow] == -1)
		character_3[ACol][ARow] = 1;
}
//---------------------------------------------------------------------------







void __fastcall TForm1::StringGrid4DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State)
{
   character_4[ACol][ARow] = 1;

	if (drawing4[ACol][ARow])
	{
		StringGrid4->Canvas->Brush->Color = RGB(255, 222, 173);
		StringGrid4->Canvas->Rectangle(Rect);

		character_4[ACol][ARow] = -1;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid4SelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
	drawing4[ACol][ARow]=!drawing4[ACol][ARow];

	if(character_4[ACol][ARow] == -1)
		character_4[ACol][ARow] = 1;
}
//---------------------------------------------------------------------------






void __fastcall TForm1::StringGrid5DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State)
{
   character_5[ACol][ARow] = 1;

	if (drawing5[ACol][ARow])
	{
		StringGrid5->Canvas->Brush->Color = RGB(255, 222, 173);
		StringGrid5->Canvas->Rectangle(Rect);

		character_5[ACol][ARow] = -1;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid5SelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
   drawing5[ACol][ARow]=!drawing5[ACol][ARow];

	if(character_5[ACol][ARow] == -1)
		character_5[ACol][ARow] = 1;
}
//---------------------------------------------------------------------------







void __fastcall TForm1::StringGrid6DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
		  TGridDrawState State)
{
   character_6[ACol][ARow] = 1;

	if (drawing6[ACol][ARow])
	{
		StringGrid6->Canvas->Brush->Color = RGB(255, 222, 173);
		StringGrid6->Canvas->Rectangle(Rect);

		character_6[ACol][ARow] = -1;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid6SelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
   drawing6[ACol][ARow]=!drawing6[ACol][ARow];

	if(character_6[ACol][ARow] == -1)
		character_6[ACol][ARow] = 1;
}
//---------------------------------------------------------------------------






void __fastcall TForm1::StringGrid7DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State)
{
   character_7[ACol][ARow] = 1;

	if (drawing7[ACol][ARow])
	{
		StringGrid7->Canvas->Brush->Color = RGB(255, 222, 173);
		StringGrid7->Canvas->Rectangle(Rect);

		character_7[ACol][ARow] = -1;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid7SelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect)
{
   drawing7[ACol][ARow]=!drawing7[ACol][ARow];

	if(character_7[ACol][ARow] == -1)
		character_7[ACol][ARow] = 1;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::StringGrid8DrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
          TGridDrawState State)
{
   character_8[ACol][ARow] = 1;

	if (drawing8[ACol][ARow])
	{
		StringGrid8->Canvas->Brush->Color = RGB(255, 222, 173);
		StringGrid8->Canvas->Rectangle(Rect);

		character_8[ACol][ARow] = -1;
	}
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid8SelectCell(TObject *Sender, int ACol, int ARow,
		  bool &CanSelect)
{
	 drawing8[ACol][ARow]=!drawing8[ACol][ARow];

	if(character_8[ACol][ARow] == 1)
		character_8[ACol][ARow] = -1;
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Button2Click(TObject *Sender)
{

	  //******************
	  // ���������
	  //******************
	  //���������

	  //Button1->Click();
	 for(int i = 1; i <= neuronCount; i++)
	 {
			 vosstanov[i] = 0;
	 }

	 int dswwdw = 0;
	 for (int i = 0; i < cont; i++)
			{
				for (int j = 0; j < cont; j++)
				{
					 isp_obraz[dswwdw] = character_7[j][i];
					 drawing8[j][i] = 0;
					 dswwdw++;
				}
			}



	for(int k = 0; k < 1000; k++)
	{
	  for (int i = 0; i < neuronCount; i++)
			{
				for (int j = 0; j < neuronCount; j++)
				{
					vosstanov[i] += matrix_W[i][j] * isp_obraz[j];
				}

			}
	}

	 for (int i = 0; i < neuronCount; i++)
	 {
			if(vosstanov[i] >= 0)
			  vosstanov[i]=1;
			else
			  vosstanov[i]=-1;
	 }


			int wadaw = 0;
		   for (int i = 0; i < cont; i++)
			{
				for (int j = 0; j < cont; j++)
				{
					drawing8[j][i] = vosstanov[wadaw];
					wadaw++;
				}
			}

			for (int i = 0; i < cont; i++)
				for (int j = 0; j < cont; j++)
				{
					if(drawing8[i][j] >=0)
						drawing8[i][j] = 0;
					else
					drawing8[i][j]= -1;
				}

			StringGrid8->Refresh();

}

void __fastcall TForm1::Button3Click(TObject *Sender)
{

for (int i = 0; i < cont; i++)
				for (int j = 0; j < cont; j++)
				{
					 drawing8[j][i] = 0;
					 character_8[j][i]=0;
				}
	StringGrid8->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
   for (int i = 0; i < cont; i++)
				for (int j = 0; j < cont; j++)
				{
					 drawing7[j][i] = 0;
					 character_7[j][i]=0;
				}
	StringGrid7->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N10Click(TObject *Sender)
{
	Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
Form3->Show();
}
//---------------------------------------------------------------------------

