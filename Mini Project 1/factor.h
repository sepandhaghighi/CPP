#include <stdio.h>
#include <conio.h>

#include <iostream.h>
#include <string.h>
#include <fstream.h>
#include <ctime.h>
#include <fstream>
int index=0;  // Main Index Init
ofstream file;
int sindex=0;

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

class store{
public:
int ID[256];
int num[256];
char name[256][256];


//void get(store);
void show_store(int,store);
void add_store(int , int , char[]);
void update (store ,int , int);


};
void store::add_store(int i, int n , char na[256])
{
		ID[sindex]=i;
		num[sindex]=n;
		for (unsigned int j=0; j < strlen(na); j++) {
			name[sindex][j]=na[j];
		}
		sindex++;
		}
void store::update(store k,int j , int num  ){
					k.num[j]=num;
					cout<<"j:"<<j<<endl;
					cout<<k.ID[j]<<"\t"<<k.num[j]<<"\t"<<k.name[j]<<endl;
}
void store::show_store(int i,store k){
			cout<<"ID"<<"\t"<<"number"<<"\t"<<"name"<<endl;
			cout<<k.ID[i]<<"\t"<<k.num[i]<<"\t"<<k.name[i]<<"\t i="<<i<<endl;
}
/////////////////////////////////////////////////////////////
/*void store::get(store a)
{
		cout<<"enter ID/ name / Quantity"<<endl;
		cin>>id;
		cin>>nam;
		cin>>number;
		a.add_store(id,number,nam);
		//cout<<a.ID<<" "<<a.name<<" "<<a.num<<endl;
		//cout<<id<<" "<<nam<<" "<<number<<endl;
}*/