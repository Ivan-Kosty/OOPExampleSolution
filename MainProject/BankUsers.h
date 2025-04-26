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
	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	int getAge() {
		return age;
	}
	void setAge(int age) {
		if (age >= 14 && age <= 80) {
			this->age = age;
		}
	}
	int getBalance(int index) {
		return balance;
	}
	bool isAnyCredit() { return anyCredit; }
	void setAnyCredit(bool anyCredit) {
		this->anyCredit = anyCredit;
	}
	BankUsers() : BankUsers("no name", 13, 10, false) {
		//cout << "Default-constructor..." << endl;
		name = "no name";
		age = 14;
		balance = 10;
		anyCredit = false;
	}
	//constructor with arguments...
	BankUsers(string nm, int a) {
		//cout << "constructor with arguments..." << endl;
		name = nm;
		age = a;
		balance = 0;
		anyCredit = false;
	}
	//canonical constructer...
	BankUsers(string name, int age, double balance, bool anyCredit) {
		//cout << "canonical constructer..." << endl;
		this->name = name;
		this->age = age;
		this->balance = balance;
		this->anyCredit = anyCredit;
	}
	//copy constructer...
	BankUsers(const BankUsers& user) : BankUsers(user.name, user.age,
		user.balance, user.anyCredit)
	{
		//cout << "copy constructer..." << endl;

	}
	//destructor
	~BankUsers() {
		//cout << "destructor..." << endl;
	}
	string toString() {
		string s = "Name: " + name;
		s += ", Age: : " + to_string(age);
		s += ", Balance: " + to_string(balance);
		s += ", Credits? ";
		s += (anyCredit ? "yes" : "no");
		return s;
	}
};