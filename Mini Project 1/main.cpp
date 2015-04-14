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
#include <factor.h>
int id=0;
int number=0;
char nam[256];


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








 int _tmain(int argc, _TCHAR* argv[])
{
int factor_index=1;
	int a ;
	char b[256];
	double c;
	int d ;
	double e;
	int ask;
	Factor temp[5];
	store total;
	int k;

	// Real time Get From PC CPU

	main_loop :
	cout<<"Enter Store [1] Or Create a Factor [2]";
	cin>>ask;
	if (ask==1) {
	  goto gotostore;
	}
	else if (ask==2) {
			 goto newfactor;

		 }
		 else{
			 cout<<"Enter Invalid Number";
			 goto main_loop;
		 }
	gotostore:

	ask_s:
	cout<<"Do you want to add store[1] or check store[2] or change store[3]?"<<endl;
	cin>>k;
	if(k==1)goto add;
	if (k==2)goto check;
	if (k==3) goto change;
	else{
	cout<<"Invalid number, try again"<<endl;
	goto gotostore;
	}

	add:
	cout<<"enter ID/ name / Quantity"<<endl;
		cin>>id;
		cin>>nam;
		cin>>number;
	total.add_store(id,number,nam);
	goto gotostore;

	check:
	cout<<"plz enter good's ID";
	cin>>id;
	for (int j=0, flag=0; j < 100; j++) {
			if(total.ID[j]==id)
				{
					flag=1;
					total.show_store(j,total);

				}
			if(flag==0) {
			cout<<"invalid ID,nothing was found"<<endl;
			goto gotostore;
			}
	}
	goto gotostore;

	change:
	cout<<"plz enter good's ID"<<endl;
	cin>>id;
	for (int j=0, flag=0; j < 100; j++) {
			if(total.ID[j]==id)
			{
					int t;
					cout<<"plz enter your good's number:"<<endl;
					cin>>t;
					total.num[j]=t;
					//total.update(total,j,t);
					//total.show_store(j,total);
					flag=1;
			}
			if(flag==0) {
			cout<<"invalid ID,nothing was found"<<endl;
			goto gotostore;
			}
			}




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
		menu_ask:
		cout<<"End Of This Factor - New Factor[1] , Print And Save  Factor[2] , Main Menu [3]";
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
			 else if (ask==3) {
					  goto main_loop;
				  }
				  else{
					  cout<<"Enter Correct Number" ;
					  goto menu_ask;
                  }
	}
	if (ask==1) {
		goto label;
	}
		else if (ask==2) {
			temp[factor_index].print(temp[factor_index]) ;
			temp[factor_index].save(temp[factor_index] , factor_index);
			ask2_label:
				cout<<"Exit [1] , New Factor[2] , Main_Menu[3]";
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
			 else if(ask==3){
			   goto main_loop;
             }
			 else{
				 cout<<"Invalid Input"<<endl;
				 goto label;
             }





 exit_label :

 exit:



	 getch();

	return 0;
}
