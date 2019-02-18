#pragma once
#include<iostream>
#include<string>
#include"Header.h"
using namespace std;

bankaccount::bankaccount (string name,int accountnumber)//defualt constructor
{
   Name=name;
   accountnmb=accountnumber;
   balancelimit=200000;
   balance=0;
   nmboftransaction=0;
   maxtransaction=10;
   transaction=new int[maxtransaction];
 
}
void bankaccount::print()//print the information of client
{
	cout<<endl;
	cout<<"Name:"<<Name<<endl;
	cout<<"Account number:"<<accountnmb<<endl;
	cout<<"Balance:"<<balance<<endl;
	cout<<"Total number of transaction:"<<nmboftransaction<<endl;
	cout<<"Transaction:"<<endl;
	for(int i=0;i<nmboftransaction;i++)
	{
		cout<<transaction[i]<<endl;
	}
}
void bankaccount::withdraw(int withdrawamount)//withdraw amount from account
{
	if(withdrawamount<=balance)
	{
		storevalueintransactions(nmboftransaction,-withdrawamount);
		balance=balance-withdrawamount;
		nmboftransaction++;
		if(nmboftransaction==maxtransaction||nmboftransaction>maxtransaction)
		{
			increaseTranCapacity();
		}
	}
	else
		cout<<"Transaction unsuccesfull:Insufficient balance:";
}
void bankaccount::deposit(int depositedamount)//deposit the amount in account
{
	if((depositedamount+balance)>=balancelimit)
		cout<<"Balance limit reached:";
	else 
	{
		if(nmboftransaction<maxtransaction&&(depositedamount+balance)<=balancelimit)
	    {
	        storevalueintransactions(nmboftransaction,depositedamount);
		    nmboftransaction++;
	    }
		balance=balance+depositedamount;
	}
	
	if(nmboftransaction==maxtransaction||nmboftransaction>maxtransaction)
	{
		increaseTranCapacity();
	}
}
void bankaccount::storevalueintransactions(int size,int amount)//store transactions value in transaction array
{
	transaction[size]=amount;
}
void  bankaccount::increaseTranCapacity()//increase the capacity of the transaction array
{
	int size=maxtransaction;
	maxtransaction=maxtransaction*2;
	int *array=new int[maxtransaction];
	for(int i=0;i<size;i++)
	{
		array[i]=transaction[i];
	}
}
bankaccount::~bankaccount()//default constructor 
{
	delete transaction;
}