#pragma oncne

#include<string>
using namespace std;

class bankaccount
{
	string Name;
	int accountnmb;
	double balance;
	int balancelimit;
	int nmboftransaction;
	int Deposit;
	int withdrawal;
	int maxtransaction;
	int*transaction;
public:
	bankaccount::bankaccount (string,int);
	void print();
	void withdraw(int);
	void deposit(int);
	void setmemory();
	void storevalueintransactions(int,int);
	void  increaseTranCapacity();
	~bankaccount();
};