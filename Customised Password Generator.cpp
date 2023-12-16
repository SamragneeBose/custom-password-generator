#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;

string word(string st)
{
	int r = rand()%(st.length()-2);
	string ran="";
	int i=0,c=1,in;
	for(i=0;i<st.length();i++)
	{
		if(isspace(st.at(i)))
		{
			c++;
			in=i+1;
		}
	}
	if (c>1)
	ran=st.substr(in,st.length()-1);
	else
	{
		if (st.length()-r >=4)
	{
		for(int i=r;i<r+4;i++)
		
			ran = ran+st.at(i);
		
	}
	
	else {
		 for(int i=r;i<st.length();i++)
         ran = ran + st.at(i);
	}
}

	for(i=0;i<ran.length()-1;i++)
	{
		if((ran.at(i)=='a' || ran.at(i)=='A') && (ran.at(i+1)=='a' || ran.at(i+1)=='A'))
		ran.at(i+1)='@';
		if((ran.at(i)=='s' || ran.at(i)=='S') && (ran.at(i+1)=='s' || ran.at(i+1)=='S'))
		ran.at(i+1)='$';
		if((ran.at(i)=='h' || ran.at(i)=='H') && (ran.at(i+1)=='h' || ran.at(i+1)=='H'))
		ran.at(i+1)='#';
	}

	return ran;
}
string randalph()
{
	string al = "abcdefghijklmnopqrstuvwxyz";
	int i=0;
	string r="";
	for(i=0;i<3;i++)
		r = r + al[rand()%al.length()];
	return r;
}

string randalphcap()
{
	string al = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i=0;
	string r="";
	for(i=0;i<2;i++)
		r = r + al[rand()%al.length()];
	return r;
}


string randnum()
{
	string al = "0123456789";
	int i=0;
	string r="";
	for(i=0;i<2;i++)
		r = r + al[rand()%al.length()];
	return r;
}

string randomsp()
{
	int MAX=16;
	string res="";
	char sp[MAX] = {'~','!','@','#','$','%','^','&','*','_',':','<','>','?','/','|'};
    res = res + sp[rand() % MAX];
    return res;
}

int main()
{
	srand(time(NULL));
	string mov,col,yr,pass1,pass2,food;
	char ch;
	int c;
	//system("Color 3F");
	cout<<"DO YOU WANT A RANDOM PASSWORD OR WANT TO CUSTOMIZE YOUR PASSWORD?"<<endl;
	cout<<endl;
	cout<<"1. Random Password"<<endl;
	cout<<"2. Custom-made Password"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:
			cout<<"****************************** RANDOM PASSWORD ******************************"<<endl;
			cout<<"Press any key to continue"<<endl;
			getchar();
			system("cls");
			cout<<"************************************************* YOUR PASSWORD IS *************************************************"<<endl;
			cout<<"\n                 Password 1 : ";
			pass1 = pass1+randalph()+randnum()+randomsp()+randalphcap()+randomsp()+randalph().substr(0,2);
			cout<<pass1<<endl;
			cout<<"\n                 Password 2 : ";
			pass2 = pass2+randalphcap()+randalph()+randomsp()+randnum()+randalph().substr(0,2)+randomsp();
			cout<<pass2;
			break;
		case 2:
			cout<<"****************************** CUSTOMIZE YOUR PASSWORD ******************************"<<endl;
			cout<<"Press any key to continue"<<endl;
			getchar();
			system("cls");
			cout<<"Please answer a few questions to proceed."<< endl;
			cout<<endl;
			cout<<endl;
			cout<<"Name of your favourite movie? (The longer it is, more secured your password will be)"<<endl;
			//cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
			getline(cin,mov);
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"Your favourite colour?"<<endl;
			getline(cin,col);
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"The cuisine you love the most?"<<endl;
			getline(cin,food);
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"Do you want your password to contain digits and symbols?"<<endl;
			cout<<"Enter Y for yes and N for no"<<endl;
			cin>>ch;
			system("cls");
			switch(toupper(ch))
			{	
				case 'Y':
					cout<<"JUST A FEW MORE QUESTIONS TO GO !! :)"<<endl;
					cout<<endl;
					cout<<endl;
					cout<<endl;
					cout<<"A memorable date? (use the format dd/mm/yyyy)"<<endl;
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
			    	getline(cin,yr);
					system("cls");
					cout<<"YOU ARE ALL SET!!"<<endl;
					cout<<"Press any key to continue"<<endl;
					getchar();
					system("cls");
					cout<<"************************************************* YOUR PASSWORD IS *************************************************"<<endl;
					cout<<"\n                 Password 1 : ";
					pass1 = pass1+word(mov)+yr.substr(0,2)+yr.substr(3,2)+word(food)+yr.substr(6,4)+randomsp();                //substring(a,b)    starting from a now many character u want to print --> 2 characters from 3 so (3,2)
					cout<<pass1<<endl;
					cout<<"\n                 Password 2 : ";
					pass2 = pass2+word(col)+yr.substr(0,2)+yr.substr(3,2)+word(food)+yr.substr(6,4)+randomsp();
					
					cout<<pass2<<endl;
					break;
				case 'N':
					system("cls");
					cout<<"YOU ARE ALL SET!!"<<endl;
					cout<<"Press any key to continue"<<endl;
					getchar();
					system("cls");
					cout<<"************************************************* YOUR PASSWORD IS *************************************************"<<endl;
					cout<<"\n                 Password 1 : ";
					pass1 = pass1+word(food)+word(col)+word(mov)+randomsp();
					cout<<pass1<<endl;
					cout<<"\n                 Password 2 : ";
					pass2 = pass2+word(col)+randomsp()+word(mov);
					
					cout<<pass2;
					break;
			break;
	}
	
		
	}
	

	return 0;
}
