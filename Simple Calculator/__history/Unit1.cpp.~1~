//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
double temp;
double temp2;
double jump;
int    flag = 0;
#define pi 3.14159265358979
#define e 2.78

double deg2rad(double x){
 double y;
 y= (x*pi)/180;

 return y;

}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button12Click(TObject *Sender)
{
MEMO->Clear();
temp=0;
temp2 = 0;
jump = 0;
flag = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
MEMO->Text=MEMO->Text+1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
MEMO->Clear();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
MEMO->Text=MEMO->Text+2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
MEMO->Text=MEMO->Text+3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
MEMO->Text=MEMO->Text+4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
MEMO->Text=MEMO->Text+5;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
MEMO->Text=MEMO->Text+6;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
MEMO->Text=MEMO->Text+7;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
MEMO->Text=MEMO->Text+8;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
MEMO->Text=MEMO->Text+9;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button11Click(TObject *Sender)
{

if (flag==1) {
	temp  = temp + MEMO->Text.ToDouble();

}
else if (flag==2) {

		  temp =(temp-MEMO->Text.ToDouble());
	 }
	 else if (flag==3) {

			   temp =temp*MEMO->Text.ToDouble();

		  }
		  else if (flag==4) {

					temp = temp/MEMO->Text.ToDouble();

			   }
			   else if (flag==5 || flag ==6) {

					}
						else if (flag==7) {
							 temp=pow(temp,MEMO->Text.ToDouble());
							 MEMO->Text=temp;
						 }
			   else{
			   if (temp==0) {
				   temp=MEMO->Text.ToDouble() ;
			   }
			   else{
				   temp=temp-MEMO->Text.ToDouble();
			   }
			   }
MEMO->Clear()      ;
flag =2 ;


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{

if (flag==1) {
 temp  = temp + MEMO->Text.ToDouble();

}
else if (flag==2) {

		 temp =(temp-MEMO->Text.ToDouble());
	 }
	 else if (flag==3) {

			   temp =temp*MEMO->Text.ToDouble();

		  }
		  else if (flag==4) {

				   temp = temp/MEMO->Text.ToDouble();

			   }
			   else if (flag==5 || flag==6) {

					}
						else if (flag==7) {
							 temp=pow(temp,MEMO->Text.ToDouble());
							 MEMO->Text=temp;
						 }
				else{
			   if (temp==0) {
						temp=MEMO->Text.ToDouble();
			   }
			   else{
				   temp=temp*MEMO->Text.ToDouble();
			   }

			   }
MEMO->Clear()      ;
flag =3 ;


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{

if (flag==1) {
	temp = temp + MEMO->Text.ToDouble();

}
else if (flag==2) {

		  temp =(temp-MEMO->Text.ToDouble());
	 }
	 else if (flag==3) {

			   temp =temp*MEMO->Text.ToDouble();

		  }
		  else if (flag==4) {

					temp = temp/MEMO->Text.ToDouble();

			   }
			   else if (flag==5 || flag ==6) {

					}
						else if (flag==7) {
							 temp=pow(temp,MEMO->Text.ToDouble());
							 MEMO->Text=temp;
						 }
			   else{
			   if (temp==0) {
						temp=MEMO->Text.ToDouble();
			   }
			   else{
				   temp=temp/MEMO->Text.ToDouble();
			   }

			   }
MEMO->Clear()      ;
flag =4 ;


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{

if (flag==1) {
	temp = temp + MEMO->Text.ToDouble();

}
else if (flag==2) {

		 temp =(temp-MEMO->Text.ToDouble());
	 }
	 else if (flag==3) {

			  temp=temp*MEMO->Text.ToDouble();

		  }
		  else if (flag==4) {

				   temp = temp/MEMO->Text.ToDouble();

			   }
			   else if (flag==5 || flag==6) {

					}
					else if (flag==7) {
							 temp=pow(temp,MEMO->Text.ToDouble());
							 MEMO->Text=temp;
						 }
			   else{
				   temp=temp+MEMO->Text.ToDouble();
			   }
MEMO->Clear()      ;
flag =1 ;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
if (flag==5) {
	MEMO->Text = temp;
}
else if (flag==1) {
temp=temp + MEMO->Text.ToDouble();
	MEMO->Text =temp;


}
else if (flag==2) {
		  temp= temp-MEMO->Text.ToDouble();
		 MEMO->Text=temp;

	 }
	 else if (flag==3) {
				 temp=  temp*MEMO->Text.ToDouble();
			  MEMO->Text=temp;

		  }
		  else if (flag==4) {
					temp= temp/MEMO->Text.ToDouble();
				   MEMO->Text = temp;


			   }
			   	else if (flag==7) {
							 temp=pow(temp,MEMO->Text.ToDouble());
							 MEMO->Text=temp;
						 }
			   flag=5;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{
 temp=pi;
 MEMO->Text=pi;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button17Click(TObject *Sender)
{
if (RadioButton1->Checked==True) {
	temp=sin(MEMO->Text.ToDouble());
	MEMO->Text=temp;
   flag =6;

}
else{
	temp=sin(deg2rad(MEMO->Text.ToDouble()));
	MEMO->Text=temp;
	flag =6;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button20Click(TObject *Sender)
{
 MEMO->Text=MEMO->Text+0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button18Click(TObject *Sender)
{
  if (RadioButton1->Checked==True) {
	  temp=cos(MEMO->Text.ToDouble());
	  MEMO->Text=temp;
	  flag =6;
  }
  else{
	  temp=cos(deg2rad(MEMO->Text.ToDouble()));
	  MEMO->Text=temp;
	  flag =6;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button19Click(TObject *Sender)
{
if (RadioButton1->Checked==True) {
	temp=tan(MEMO->Text.ToDouble());
	MEMO->Text=temp;
	flag =6;


}
else{
	temp=tan(deg2rad(MEMO->Text.ToDouble()));
	MEMO->Text=temp;
	flag =6;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button21Click(TObject *Sender)
{
temp=log(MEMO->Text.ToDouble());
MEMO->Text=temp;
flag =6;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button23Click(TObject *Sender)
{
temp=sqrt(MEMO->Text.ToDouble());
MEMO->Text=temp;
flag =6;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button22Click(TObject *Sender)
{
temp=log10(MEMO->Text.ToDouble());
MEMO->Text=temp;
flag =6;
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

void __fastcall TForm1::Button24Click(TObject *Sender)
{
temp=MEMO->Text.ToDouble();
MEMO->Clear();
flag =7 ;
}
//---------------------------------------------------------------------------

