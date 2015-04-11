#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>

#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <conio.h>

#include <iostream.h>
#include <string.h>
#include <fstream.h>
#include <ctime.h>
#include <fstream>


int index=0;  // Main Index Init
ofstream file;   // file as ofstream for saving factors

void char_printer(int num , int kind){    // Print - or == for lines and split
 if (kind ==1) {
   for (int i=0; i < num; i++) {


cout<<"-";


}
cout<<endl;
 }
 else if (kind==2) {
            for (int i=0; i < num; i++) {


cout<<"=";


}
cout<<endl;
	  }


}





class Factor{     // Factor Class   Init
public :
int num[256];       //Factor Numbers
char name[256][256];   // Name In Factor
int count[256] ;         // Count Of That Object
double price[256];       //Price
double total[256];       // Total Price



void add_line ( int , char[]  , int , double);  // Add One Line To a Factor Object
double total_price (Factor);      // Calc Toal Price
double total_num(Factor);         // Calc Total Counts
void print (Factor);              // Printing On Console
void save (Factor , int);               // Saving In File
};

 void Factor::add_line(int a, char b[256] , int d , double e){  //Add Line Method
 int i;
 int length;
 length = strlen(b);
  for (i = 0; i < 31; i++) {
	 name[index][i]=b[i];
 }
 if (length>=32) {
	  name[index][31]=char(46);
	  name[index][32]=char(46);
	  name[index][33]=char(46);
 }


 num[index] = a;
 count[index] = d;
 price[index] = e;
 total[index]= e*d;
 index=index+1;
 }
 void Factor:: print(Factor a){  // Print Method
 int i;
 cout<<"#"<<"\t"<<"\t"<<"Name"<<"\t"<<"Quantitiy"<<"\t"<<"Price"<<"\t"<<"Total\n";
 cout<<"---------------------------------------------------------------\n";
 for (i = 0; i < index; i++) {
 cout<<a.num[i]<<"\t\t"<<a.name[i]<<"\t  "<<a.count[i]<<"\t\t"<<a.price[i]<<"\t"<<a.total[i]<<"\n";

 }
 cout <<"---------------------------------------------------------------\n";
 cout<<"Total Prices :" <<a.total_price(a)<<"\n";
 cout<<"Total Quantity :" <<a.total_num(a)<<"\n";

 }



 double Factor ::total_price(Factor a){    // Total Price Method
	double sum;
	int i;
	for (i = 0; i < index; i++) {
		sum = sum + a.price[i]*a.count[i] ;
	}
	return sum;
	}
	double Factor ::total_num(Factor a){
	int i;
	double sum;
	for (i = 0; i < index; i++) {
			sum = sum + a.count[i];

	}
	return sum;

	}
 void Factor::save(Factor a , int o ){   // Save Method
	file.open("Factor.txt");
	file<<"\t\tPlease Enter Factor Information\t"<<" -- Factor Number : "<<o<<endl;
	file<<"#"<<"\t"<<"\t"<<"Name"<<"\t"<<"Quantitiy"<<"\t"<<"Price"<<"\t"<<"Total\n\n";
	for (int i = 0; i < index; i++) {
 file<<a.num[i]<<"\t\t"<<a.name[i]<<"\t  "<<a.count[i]<<"\t\t"<<a.price[i]<<"\t"<<a.total[i]<<"\n";
 }
 file.close();
 }



 int _tmain(int argc, _TCHAR* argv[])
{
int factor_index=1;
	int a ;
	char b[256];
	double c;
	int d ;
	double e;
	int ask;

	// Real time Get From PC CPU


	 Factor temp[5];
	 newfactor:
	 time_t t=time(0);
	struct tm * now = localtime( & t );
	cout<<"\t\t\tDate And Time : ";
	cout << (now->tm_year + 1900) << '-'
         << (now->tm_mon + 1) << '-'
		 <<  now->tm_mday<<"  "
		 << now->tm_hour<<':'
		 <<now->tm_min<<':'
		 <<now->tm_sec
		 << endl;
	 cout<<"\t\tPlease Enter Factor Information\t"<<" -- Factor Number : "<<factor_index<<endl;
	 char_printer(80,1);
	label:
	cout<<"Please Enter Number :";
	cin>>a;


	cout<<"\n"<<"Please Enter Your Name:";
	cin>>b;
	cout<<"\n"<<"Please Enter Quantity : ";
	cin>>d;
	cout<<"\n"<<"Please Enter Price : ";
	cin>>e;
	cout<<"\n"<<"Add Another Object To Factor [1] Or Print And Save Factor[2]";
	temp[factor_index].add_line(a,b,d,e);
	cin>>ask;
	if (index>255) {
		index=0;
		cout<<"End Of This Factor - New Factor[1] , Print And Save  Factor[2]";
		cin>>ask;
		if (ask==1) {

			factor_index=factor_index+1;
			goto newfactor;

		}
		else if (ask==2) {
				temp[factor_index].print(temp[factor_index]);
				temp[factor_index].save(temp[factor_index],factor_index);
			ask1_label:
				cout<<"Exit [1] , New Factor[2]";
				cin>>ask;
				if (ask==1) {
							  goto exit_label;
				}
				else if (ask==2) {
				factor_index=factor_index+1;
				goto newfactor;

					 }
					 else{
						 goto ask1_label;
					 }
			 }
	}
	if (ask==1) {
		goto label;
	}
		else if (ask==2) {
			temp[factor_index].print(temp[factor_index]) ;
			temp[factor_index].save(temp[factor_index] , factor_index);
			ask2_label:
				cout<<"Exit [1] , New Factor[2]";
				cin>>ask;
				if (ask==1) {
							  goto exit_label;
				}
				else if (ask==2) {
				factor_index=factor_index+1;
				goto newfactor;

					 }
					 else{
						 goto ask2_label;
					 }
			 }
			 else{
				 cout<<"Invalid Input"<<endl;
				 goto label;
             }





 exit_label :



	 getch();

	return 0;
}
