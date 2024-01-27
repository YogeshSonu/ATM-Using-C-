/*
	Name:      ATM
	Copyright: 
	Author:    YOGESH PUROHIT
	Date: 16/09/22 15:08
	Description: 
*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char *pin[]={"1520","2312","9650","5641"};
	char pin1[5];
	long int balance=1000,choice,deposit,withdraw;
	int i,j,a=0;
	cout<<"\n\n\n\t\t\t***********************************************";
	cout<<"\n\t\t\t\tWELCOME TO ATM SERVICE OF SBI";
	cout<<"\n\t\t\t***********************************************";
	cout<<"\n\n\t*************************";
	cout<<"\n\t*\t1. 1520         *";
	cout<<"\n\t*\t2. 2312         *";
	cout<<"\n\t*\t3. 9650         *";
	cout<<"\n\t*\t4. 5641         *";
	cout<<"\n\t*************************";
	cout<<"\n\n\t\t--->Above Mentioned four numbers is your PIN of ATM.";
	cout<<"\n\t\t--->Remember the one of them and.....";
	cout<<"\n\t\t--->Press Enter to Continue......";
	getch();
	system("cls");
	cout<<"\n\n\n\t\t\t***********************************************";
	cout<<"\n\t\t\t\tWELCOME TO ATM SERVICE OF SBI";
	cout<<"\n\t\t\t***********************************************";
	cout<<"\n\n\t\t--->Hello User.....";
	cout<<"\n\t\t--->Welcome to Our ATM Service....";
	cout<<"\n\t\t--->In our Service,You can Withdraw the Money...";
	cout<<"\n\t\t--->You can Deposit the Money and...";
	cout<<"\n\t\t--->You can Check the balance of your account.";
	cout<<"\n\n\t\t--->PRESS ENTER TO START THE ATM SERVICE..";
	getch();
	top:
		system("cls");
		cout<<"\n\n\n\t\t\t***********************************************";
		cout<<"\n\t\t\t\tWELCOME TO ATM SERVICE OF SBI";
		cout<<"\n\t\t\t***********************************************";
		cout<<"\n\n\t\t****************************";
		cout<<"\n\t\t*  Enter Your ATM PIN:     *";
		cout<<"\n\t\t****************************\n";
		scanf("%s",&pin1);
		for(i=0;i<4;i++)
		{
			if(strcmp(pin[i],pin1)==0)
			{
				a=1;
			}
		}		
		if(a==1)
		{
			do
			{
				system("cls");
				cout<<"\n\n\n\t\t\t***********************************************";
				cout<<"\n\t\t\t\tWELCOME TO ATM SERVICE OF SBI";
				cout<<"\n\t\t\t***********************************************";
				cout<<"\n\n\t********************************";
				cout<<"\n\t*\t1. Deposit Money.      *";
				cout<<"\n\t*\t2. Withdraw Money.     *";
				cout<<"\n\t*\t3. Balance Inquiry.    *";
				cout<<"\n\t*\t4. Exit.               *";
				cout<<"\n\t********************************";
				cout<<"\n\n\t\t\tEnter your choice from Above[1-4]: ";
				cin>>choice;
				switch(choice)
				{
					case 1:
						system("cls");
						cout<<"\n\n\tYour Current Balance is :  Rs. "<<balance;
						cout<<"\n\n\tEnter the Amount you want to deposit :";
						cin>>deposit;
						balance=balance + deposit;
						cout<<"\n\n\tAmount Deposited Successfully";
						cout<<"\n\n\tYour Current Balance is : Rs. "<<balance;
						cout<<"\n\n\n\t\tPress Enter for Continue.";
						getch();
						break;
					case 2:
						system("cls");
						cout<<"\n\n\tYour Current Balance is :  Rs. "<<balance;
						cout<<"\n\n\tEnter the Amount you want to Withdraw : ";
						cin>>withdraw;
						if(withdraw<=balance)
						{
							cout<<"\n\n\tWithdrawn Amount Successfully";
							balance=balance-withdraw;
						}	
						else
						{	
							cout<<"\n\n\tWithdrwan Request is not process successfully due to insufficient balance ";
						}	
						cout<<"\n\n\n\t\tPress Enter for Continue.";
						getch();
						break;
					case 3:
						system("cls");
						cout<<"\n\n\tYour Last Updated Balance is "<<balance;
						cout<<"\n\n\n\t\tPress Enter for Continue.";
						getch();
						break;
					case 4:
						break;
					default:
						cout<<"\n\n\tInvalid Choice!!\n\tTry Again!!!";
						cout<<"\n\n\n\t\tPress Enter for Continue.";
						getch();
				}
			}while(choice!=4);
		}
		else
		{
			cout<<"\n\n\t\t--->Sorry You entered the Wrong PIN.....";
			cout<<"\n\t\t--->Try Again!!!!!";
			cout<<"\n\t\t--->Press Enter to Continue.....";
			getch();
			goto top;
		}
	cout<<"Press any key to end the program";
 	getch();
	return 0;
}

