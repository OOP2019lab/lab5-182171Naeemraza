#include<iostream>
#include<string>
#include<conio.h>
#include"Header.h"
using namespace std;
int main()
{
	bankaccount myaccount("john doe",549002);
	myaccount.deposit(25000);//deposit amount in account
	myaccount.deposit(1000);//deposit amount in account
	myaccount.deposit(2000)//deposit amount in account
	myaccount.deposit(6000)//deposit amount in account
	myaccount.deposit(2000)//deposit amount in account
	myaccount.deposit(2000)//deposit amount in account
	myaccount.deposit(9000)//deposit amount in account
	myaccount.deposit(8000)//deposit amount in account
	myaccount.deposit(400)//deposit amount in account
	myaccount.deposit(20)//deposit amount in account
	myaccount.deposit(2000)//deposit amount in account
	myaccount.deposit(10)//deposit amount in account
	myaccount.deposit(500)//deposit amount in account
	myaccount.withdraw(5000)//with draw amount from account
	myaccount.print();
	system("pause");
}