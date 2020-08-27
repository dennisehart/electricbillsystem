#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std; 
int main ()
{
	system("color 70");
	cout<<'\n';
	cout<<"------------------------------------------------"<<endl;
	cout<<"        Welcome to Sparkes Bayad Center!        "<<endl;
	cout<<endl;
	cout<<endl;
	

    string month,password,report,kWh;
    float kilowatts,watts,days,hours,kwhmon;
    int selection,balance=90000;
    
	cout<<"LOG IN"<<endl;
	cout<<"Enter 10 letter account name: ";

	char a[10];
	for (int i=0;i<10;i++)
	{ cin>>a[i];
	  if (a[i] ==' '); 
	}
	
    cout<<"Enter password: ";
    cin>>password;
	
	system("cls");
	do
    {
	cout<<"------------------MAIN MENU---------------------"<<endl;
	cout<<"What would you like to do?"<<endl;
	cout<<"1. View Balance"<<endl;
	cout<<"2. Pay my bill"<<endl;
	cout<<"3. Calculate my Energy Consumption"<<endl;
	cout<<"4. Calculate my Electricity Bill cost"<<endl;
	cout<<"5. Report a problem"<<endl;
    cout<<"6. Logout"<<endl;
    
    cout<<"Select: ";
	cin>>selection;
	
	switch (selection) {
		case 1:
		system("cls");
		cout<<"Current balance for the month of: November"<<endl;
		cout<<"Balance: P"<<balance<<endl;
		cout<<endl;
		break;
		
		case 2:
		system("cls");
		int select; 
		cout<<"Your balance is: "<<balance<<endl;
		cout<<"Would you like to pay now?"<<endl;
		cout<<"7. Pay now"<<endl;
		cout<<"8. Back to Menu"<<endl; 
		cout<<"Select an option: "; 
		cin>>select; 
		
		if (select==7)
		{
		float pay;
		int choice;
		system("cls");
		cout<<"Pay using: (1) Card or (2) Cash?"<<endl;
		cout<<"Select an option: ";
		cin>>choice;
		  if (choice==1)
		  {
		  	cout<<"Pay using: Card"<<endl;
		  }
		  else
		  {
		  	cout<<"Pay using: Cash"<<endl;
		  }
		cout<<"Enter amount to pay: P";
		cin>>pay;
		if (pay>balance)
		{
			cout<<"Insufficient funds!"<<endl;
		}
		system("cls");
	    cout<<"Remaining Balance: P"<<balance-pay<<endl;
		cout<<"Please proceed to the counter to pay."<<endl;
		cout<<"Thank you!"<<endl;
	    }
		break;
		
		case 3:
		system("cls");
		float energy;
		cout<<"Calculate my electricity consumption"<<endl;
		cout<<"Power consumption for the month of: "; 
		cin>>month;
		cout<<"Enter Power Consumption in watts(W): ";
	    cin>>watts; 
		cout<<"Enter Hours of use per day: "; 
		cin>>hours;
		cout<<"Enter Number of days in a month: ";
		cin>>days;
		
		energy=watts*hours*days/1000;
		cout<<"Energy consumed for the month: "<<energy<<" kWh"<<endl;
		cout<<endl;
		break;
		
		
		case 4:
		system("cls");
		float billday,billmonth;
		cout<<"Calulate my Electrcity Bill cost for: ";
		cin>>month;
		cout<<"Enter Power Consumption in kilowatts (KWh): ";
	    cin>>kilowatts; 
		cout<<"Enter Hours of use per day: ";
		cin>>hours;
		cout<<"Enter Number of days in a month: ";
		cin>>days;
		billday=kilowatts*hours*12/100;
		billmonth=(kilowatts*hours*12/100)*days;
		cout<<"Bill cost per day: P"<<billday<<endl;
		cout<<"Bill cost per month: P"<<billmonth<<endl;
		cout<<endl;
		break;
		
		case 5:	
		system("cls");
		int problem;
		cout<<"Report a problem"<<endl;
	    cout<<"Choose a problem (1) Disconnection problem (2) Billing concern"<<endl;
	    cout<<"Problem: ";cin>>problem;cout<<endl;
	    if (problem==1)
	    {
	    	cout<<"please email sparkesxsol@gmail.com"<<endl; 
		}
		else if (problem==2) 
		{
			string email, name, month;
			cout<<"Please input your email, name and what billing month is the problem"<<endl;
			cout<<"Email Address: ";
			cin>>email;
			cout<<"Name: ";
			cin>>name;
			cout<<"Month: ";
			cin>>month;
			cout<<"We will send an email to you Mr./Ms. "<<name<<" about this concern, thank you!"<<endl;
		}
		else
		{
			cout<<"ERROR"<<endl;
		}
		break;
	
		case 6:
		system("cls");
		cout<<"LOGOUT"<<endl;
			char choice;
	    cout<<"Logout: are you sure you want to logout? (y) Yes (n) No: ";
	    cin>>choice;
	    if (choice=='y')
	    {
		cout<<"Successfully Logged out.";
		return 0;
	    }
		break;
		
		default:
		cout<<"Please choose within the menu"<<endl;
		break;
	}
    }
    while (1);


	return 0; 
	

}

