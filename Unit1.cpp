//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int data [10000];
double SelSortTime [10];
double BubSortTime [10];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	clock_t t0,t1;
	t0 = clock();
	int n = StrToInt(Edit1->Text);
	int range = StrToInt(Edit2->Text);
	for (int i=0;i<=range;i++){
		data[i]=rand()%range;
	}
	t1 = clock();
	if(CheckBox2->Checked){
		for(int i=0;i<n;i++){
			Memo1->Lines->Add("data["+IntToStr(i+1)+"] = "+IntToStr(data[i]));
		}
      Memo1->Lines->Add("CPU time: "+FloatToStr((float)(t1-t0)/CLOCKS_PER_SEC));
	}
  else{
      Memo1->Lines->Add("CPU time: "+FloatToStr((float)(t1-t0)/CLOCKS_PER_SEC));
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
clock_t t0,t1;
  t0=clock();
  int w,x,y,z;
  int min,temp;

  int n = StrToInt(Edit1->Text);
  for(int i=0;i<n;i++){
    min=i;
    for(x=i+1;x<n;x++){
	  if (data[x]<data[min]){
        min=x;
      }
      temp=data[i];
      data[i]=data[min];
      data[min]=temp;
    }
    t1=clock();
    if(CheckBox2->Checked){
      for(int i=0;i<n;i++){
        Memo2->Lines->Add("data["+IntToStr(i+1)+"]"+IntToStr(data[i]));
      }
      Memo2->Lines->Add("CPU time: "+FloatToStr((float)(t1-t0)/CLOCKS_PER_SEC));
    }
    else{
      Memo2->Lines->Add("CPU time: "+FloatToStr((float)(t1-t0)/CLOCKS_PER_SEC));
    }
    if(CheckBox1->Checked){
      for(int c;c<n;c++){
        if(data[c]>data[c+1]){
          break;
        }
      }
    if(data[z]>data[z+1]){
      Memo2->Lines->Add("sorting failed");
    }
    else{
      Memo2->Lines->Add("sorting succeed");
    }
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
    	clock_t t0,t1;
  t0 = clock_t();
  int n = StrToInt(Edit1->Text);
  int temp = 0;
  int x = 0;
  for(int i=0;i<n-1;i++){
    for(int y=0;y<n-1;y++){
      if(data[y]>data[y+1]){
        temp=data[y];
        data[y]=data[y+1];
        data[y+1]=temp;
      }
    }
  }
  t1 = clock();
  if(CheckBox2->Checked){
    for(int i=0;i<=n-1;i++){
	  Memo3->Lines->Add("data["+IntToStr(i+1)+"]="+IntToStr(data[i]));
    }
    Memo3->Lines->Add("CPU time: "+FloatToStr((float)(t1-t0)/CLOCKS_PER_SEC));
  }
  else{
	Memo3->Lines->Add("CPU time: "+FloatToStr((float)(t1-t0)/CLOCKS_PER_SEC));
  }
  if(CheckBox1->Checked){
		for(int i=0;i<n;i++){
			if(data[i]>data[i+1]){
				break;
			}
		}
		if(data[x]>data[x+1]){
			Memo3->Lines->Add("sorting failed");
		}
		else{
			Memo3->Lines->Add("sorting succeed");
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
    clock_t t0,t1;
  t0 = clock_t();
  int n = StrToInt(Edit1->Text);
  int x = 0;
	int y;
	int s = StrToInt(Edit3->Text); //search
	while (x<=n) {
		y=(n+x)/2;
		if(data[y]<s){
			x=y+1;
		}
		else if(data[y]>s){
			n=y-1;
		}
		else if(data[y]=s){
			break;
		}
	}
	if (data[y]==s){
		Memo4->Lines->Add("data["+IntToStr(y+1)+"]= "+IntToStr(data[y]));
	}
	else if(data[y]!=s){
		Memo4->Lines->Add("The number is not exist in this sort...");
	}
	t1=clock();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
    Chart1->RemoveAllSeries();
	Chart1->Title->Text->Clear();
	Chart1->Title->Text->Add("CPU time chart");
	Chart1->BottomAxis->Title->Caption = "data size";
	Chart1->LeftAxis->Title->Caption = "CPU time (sec)";
	for(int i=0;i<5;i++){
		SelSortTime[i]=10*(i+1)+rand()%10;
		BubSortTime[i]=12*(i+1)+rand()%12;
	}
	Chart1->AddSeries(new TLineSeries (this));

	Chart1->Series[0]->Title="Selection sort";
	Chart1->Series[0]->AddArray(SelSortTime,4);
	Chart1->AddSeries(new TLineSeries (this));
	Chart1->Series[1]->Title ="Bubble sort";
	for(int i=0;i<5;i++){
		Chart1->Series[1]->Add(BubSortTime[i],10000*(i+1), clGreen);
	}
	for (int i=0;i<5;i++){
		Chart1->Series[i]->Marks->Visible =true;
		Chart1->Series[i]->Marks->Visible =smsValue;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
PCHAR FullPrgmPath;
	FullPrgmPath = PCHAR(Application->ExeName.c_str());
	WinExec(FullPrgmPath, SW_SHOW);
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
Chart1->RemoveAllSeries();
Edit2->Clear();
Edit3->Clear();
Edit1->Clear();
Memo1->Lines->Clear();
Memo2->Lines->Clear();
Memo3->Lines->Clear();
Memo4->Lines->Clear();
Chart1->Title->Text->Clear();
}
//---------------------------------------------------------------------------
