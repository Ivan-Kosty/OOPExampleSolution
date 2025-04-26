#include <iostream>
#include <string>
#include "main.h"
using namespace std;

class BankUsers {
private:
	string name;
	int age;
	int balance;
	bool anyCredit;
public:
	
	BankUsers() : BankUsers("no name", 13, 10, false) { }
	BankUsers(string nm, int a);
	BankUsers(string name, int age, int balance, bool anyCredit);
	BankUsers(const BankUsers& user) : BankUsers(user.name, user.age,
		user.balance, user.anyCredit) { }
	~BankUsers();

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	int getBalance(int index);
	bool isAnyCredit();
	void setAnyCredit(bool anyCredit);
	double getAllBillBalance();
	string toString();
};