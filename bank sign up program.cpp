#include<iostream>
using namespace std;
int main()
{
	
	int i,p,t,k=0,g,d,o,pass;
	char name[30];
	cout<<"Enter your name : ";
	cin>>name;
	cout<<"Enter the password : ";
	cin>>pass;
	if(pass==123){
	
		cout<<"\n\n---------------------------Welcome "<<name<<"------------------------------\n\n\n";
	
	for(d=100;d>1;d++)
	{
	cout<<"1:check amount \n2:deposit amount \n3:withdraw amount \n4:savings \n5:exit\n";
	cout<<endl<<"what your choice:";
	cin>>i;
	switch(i)
	{
		case 1:
			{	system("cls");
				if(p==0){
				cout<<"your account is empty\n"<<endl;
			}
				else
		{
		cout<<"your amount: "<<p<<"\n"<<endl;
		}}	
			    break;
			
		case 2:
		{
			system("cls");
			cout<<"enter amount: ";
			cin>>p;
			cout<<"deposited amount:"<<p<<endl;
			cout<<"\n";
			break;
		}
		case 3:
		{system("cls");
			cout<<"enter amount: ";
			cin>>t;
			p=p-t;
			cout<<"current amount:"<<p<<endl;
			cout<<"\n";
			
			break;
			
		}
		case 4:
		{system("cls");
			
			if(k==0)
		{
			cout<<"no savings yet"<<endl;
			cout<<"\n deposit savings: ";
			cin>>o;
			k+=o;		
		}
		else
		{
			cout<<"your current savings: ";
			cout<<o<<endl;
		}
		break;
		case 5:
		{system("cls");
			cout<<"thankyou very much!!!!!!!";
			exit(0);
			break;
		}	
		default:
			{
				cout<<"make sure your choise is correct??? "<<endl;
				break;
			}
	}}
}}
else{
	cout<<"Password is wrong!!";
	exit(0);
}}
